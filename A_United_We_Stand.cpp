#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,c=0,d=0;cin>>a;int A[a];
        
        for(int i=0;i<a;i++)cin>>A[i];
        sort(A,A+a);
        for(int i=0;i<a-1;i++){
            if(A[i]==A[i+1]){
                c++;
            }
            else break;
        }
        if(c+1==a) cout<<-1<<'\n';
        else {
            if(c==0){
                cout<<1<<" "<<a-1<<'\n'<<A[0]<<'\n';
                for(int i=1;i<a;i++){
                    cout<<A[i]<<" ";
                }
                cout<<'\n';
            }
            else{
            cout<<c+1<<" "<<a-c-1<<'\n';
            for(int i=0;i<=c;i++)
            cout<<A[i]<<" ";
            cout<<'\n';
            for(int i=c+1;i<a;i++)
            cout<<A[i]<<" ";
            cout<<'\n';}

        }
       
    }
}