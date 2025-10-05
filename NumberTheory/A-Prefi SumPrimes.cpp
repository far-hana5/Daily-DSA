
int main()
{

    int n;
    cin>>n;
    vector<int>arr(n);int c1=0;int c2=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1)c1++;
        else{ c2++;}
    }

    vector<int>ans(n,-1);
    int i=0;
    while(c2!=0){
            if(i==1 && c1>0){
                ans[1]=1;c1--;
                i++;
            }else{
            ans[i]=2;c2--;
            i++;
            }

    }


    while(c1!=0){
        ans[i]=1;c1--;
        i++;
    }
  for(int i=0;i<n;i++){
       cout<<ans[i]<<" ";
    }
    cout<<endl;
}
