#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,m,c=0,y=0,x=0;cin>>n>>m;
        //int A[n],B[m];
        // for(int i=0;i<n;i++){
        //     cin>>A[i];
        // }
        // for(int i=0;i<m;i++){
        //     cin>>B[i];
        // }
        string A,B;cin>>A>>B;
        for (int i = 0; i < n - 1; i++)
        {
            if (A[i] == A[i + 1])
            {
                y=1;
               
            }
        }
        for(int i=0;i<m-1;i++){
            if(B[i]==B[i+1]){
               c=1;

            }
        }
        if(c==1 && y==1) 
        cout<<"No\n";
      else{
            for(int i=0;i<n-1;i++){
                if(A[i]==A[i+1] && c!=1)
                {
                    if(A[i]==B[0] || A[i+1]==B[m-1]){ x=1;break;}
                }
            }
            cout<<(x==1?"No":"Yes");
            cout<<endl;
      }
    }
}