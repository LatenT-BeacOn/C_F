#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;
        if(a%2==0) cout<<-1<<'\n';
        else{
        for(int i=1;i<=a;i++){
            if(i%2==0) cout<<i<<" ";
        }
        
        for(int i=1;i<=a;i++){
            if(i%2!=0)
            cout<<i<<" ";
        }
        cout << '\n';
        }
       
    }
}