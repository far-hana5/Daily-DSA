/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
     int val;
     Node* left;
     Node* right;

     Node(int val){
         this->val=val;
         this->left=NULL;
         this->right=NULL;
     }
};

Node* inputTree(){
    int val;//root node value
    cin>>val;
    if(val==-1)return NULL;

    Node* root=new Node(val);
    queue<Node*>q ;
    q.push(root);

    while(!q.empty()){
        Node* f=q.front();
        q.pop();


        int l,r;
        cin>>l>>r;
         Node* myLeft,myRight;
         if(l==-1)myLeft=NULL;
         else myLeft=new Node(l);

         if(r==-1)myRight=NULL;
         else myRight=new Node(r);

         f->left=myLeft;
         f->right=myRight;

        if(f->left){
            q.push(f->left);
        }

        if(f->right) {
            q.push(f->right);
        }



        }
        return root;
    }

int maxHeight(Node* root){
if(root==NULL)return 0;

if(root->left==NULL && root->right==NULL)return 0;

int l=maxHeight(root->left);
int r=maxHeight(root->right);

return max(l,r)+1;

}



int main()
{

Node* root=inputTree();

    return 0;
}
