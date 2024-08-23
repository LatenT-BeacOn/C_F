#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;int A[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        int c=0;
        int d=0,x=0;
        for(int i=0;i<a-1;i++){
            if(A[i]==A[i+1]) c++;
            else {
                   d=i;
                   x=i+1;
                   break;
            }
        }
        if(c+1==a) cout<<"NO\n";
        else {
            cout<<"YES\n";
            for(int i=0;i<a;i++){
                if(i==d || i==x)
                cout<<'B';
                //else if(i==x) cout<<"R";
                else cout<<'R';
            }
            cout<<endl;
            
        }
    }
}