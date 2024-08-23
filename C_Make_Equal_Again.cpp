#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        /* code */
        int a;cin>>a;int A[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        int c=0,l=0,x=0,y=0;
        for(int i=0;i<a-1;i++){
            if(A[i]==A[i+1]) c++;
            else{
               // x=i;
                break;
            }
        }
        //cout<<c<<" ";
         if(c+1==a) cout<<0<<'\n';
         else if(c==0) {
            if(A[0]==A[a-1])cout<<a-2<<'\n';
            else cout<<a-1<<'\n';}
         else{
        for(int i=a-1;i>0;i--){
            if(A[i]==A[i-1]) l++;
            else{
                //y=i;
                break;
            }

        }
        cout<<a-(c+1)-(l+1)<<'\n';

         }

    }
    
}