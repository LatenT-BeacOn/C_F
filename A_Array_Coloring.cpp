#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        /* code */
        int a,c=0,d=0;cin>>a;int A[a];for(int i=0;i<a;i++){
            cin>>A[i];
           if(A[i]%2==0){c+=A[i];}
            else { d+=A[i];}
        }
   
        if(abs(c-d)%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}