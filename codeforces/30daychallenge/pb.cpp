
/*
#include <iostream>
#include <map>
#include <vector>

using namespace std;

typedef long long ll;

map<pair<ll, ll>, pair<ll, pair<ll, ll>>> memo;

// We use a simpler recursive approach:
// Solve for the current highest bit and recurse.
pair<ll, pair<ll, ll>> solve(ll x, ll y) {
    if (x == 0 && y == 0) return {0, {0, 0}};
    if (memo.count({x, y})) return memo[{x, y}];

    // Find the highest bit set in either x or y
    ll high = 0;
    for (int i = 30; i >= 0; i--) {
        if ((x >> i) & 1 || (y >> i) & 1) {
            high = 1LL << i;
            break;
        }
    }

    // Try 3 cases for the highest bit:
    // 1. Bit goes to p
    // 2. Bit goes to q
    // 3. Bit goes to neither (both get 0)

    // This is a simplified logic; for the full Manhattan distance,
    // we check the bits and potential carries.
    // In practice, since p & q = 0, p and q are subsets of some mask.
}

// A more direct greedy observation for this specific problem:
// p & q = 0 means p and q are disjoint masks.
// The total distance is minimized when we partition the bits of (x | y).
void solve_case() {
    ll x, y;
    cin >> x >> y;

    ll best_dist = -1;
    ll best_p = 0, best_q = 0;

    // We can use the fact that p and q will likely be close to x and y bits.
    // For this problem, a recursive search exploring bits from 29 down to 0
    // with memoization on (index, carryX, carryY) is the standard way.

    // Shortest Statement logic:
    // For each bit, if both x and y have the bit,
    // we must decide which one gets it and which one loses it.
}

*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Tree structure to handle the graph hierarchy.
 * Uses Heavy-Light Decomposition logic to flatten the tree for range queries.
 */
struct TreeProcessor {
    int n;
    vector<vector<int>> adj;
    vector<int> depth, size, head, pos, parent;
    int cur_pos;

    TreeProcessor(int n) : n(n), adj(n + 1), depth(n + 1), size(n + 1),
                           head(n + 1), pos(n + 1), parent(n + 1), cur_pos(0) {}

    // First DFS to calculate subtree sizes and find "heavy" edges
    void dfs_sz(int u) {
        size[u] = 1;
        for (int &v : adj[u]) {
            depth[v] = depth[u] + 1;
            dfs_sz(v);
            size[u] += size[v];
            if (size[v] > size[adj[u][0]]) swap(v, adj[u][0]);
        }
    }

    // Second DFS to decompose into heavy paths
    void dfs_hld(int u, int h) {
        head[u] = h;
        pos[u] = ++cur_pos;
        for (int v : adj[u]) {
            dfs_hld(v, v == adj[u][0] ? h : v);
        }
    }
};

/**
 * Segment Tree with Lazy Propagation for range updates and sum queries.
 */
struct SegmentTree {
    int n;
    vector<long long> tree, lazy;

    SegmentTree(int n) : n(n), tree(4 * n + 5, 0), lazy(4 * n + 5, 0) {}

    void push(int i, int l, int r) {
        if (lazy[i] != 0) {
            int m = (l + r) / 2;
            tree[2 * i] += lazy[i] * (m - l + 1);
            lazy[2 * i] += lazy[i];
            tree[2 * i + 1] += lazy[i] * (r - m);
            lazy[2 * i + 1] += lazy[i];
            lazy[i] = 0;
        }
    }

    void update(int i, int l, int r, int ql, int qr, int val) {
        if (ql <= l && r <= qr) {
            tree[i] += (long long)val * (r - l + 1);
            lazy[i] += val;
            return;
        }
        push(i, l, r);
        int m = (l + r) / 2;
        if (ql <= m) update(2 * i, l, m, ql, qr, val);
        if (qr > m) update(2 * i + 1, m + 1, r, ql, qr, val);
        tree[i] = tree[2 * i] + tree[2 * i + 1];
    }

    long long query(int i, int l, int r, int ql, int qr) {
        if (ql <= l && r <= qr) return tree[i];
        push(i, l, r);
        int m = (l + r) / 2;
        long long res = 0;
        if (ql <= m) res += query(2 * i, l, m, ql, qr);
        if (qr > m) res += query(2 * i + 1, m + 1, r, ql, qr);
        return res;
    }
};

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;

    // The 'furthest' edge for each vertex defines the tree parent
    vector<int> furthest(n + 1);
    for (int i = 1; i < n; ++i) furthest[i] = i + 1;

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        furthest[u] = max(furthest[u], v);
    }

    TreeProcessor tree(n);
    for (int i = 1; i < n; ++i) {
        tree.adj[furthest[i]].push_back(i);
        tree.parent[i] = furthest[i];
    }

    tree.dfs_sz(n);
    tree.dfs_hld(n, n);

    SegmentTree st(n);
    long long total_sum = 0;

    // Process based on tree structure to accumulate f(x, y)
    for (int i = 1; i <= n; i++) {
        int u = i;
        // Move up the tree from Jerry's start to root to update interception paths
        while (u != 0) {
            st.update(1, 1, n, tree.pos[tree.head[u]], tree.pos[u], 1);
            u = tree.parent[tree.head[u]];
        }

        // The query provides the sum of distances for Tom to reach interception
        // This is based on the logic seen in the screenshot's 'S' and 'T' structures.
        total_sum += (long long)(n - 1) * tree.depth[i] - (st.query(1, 1, n, 1, n) - tree.depth[i]);
    }

    cout << total_sum << "\n";
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
