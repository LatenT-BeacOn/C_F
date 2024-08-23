#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string s[a];

        for(int i=0;i<a;i++){
            cin>>s[i];
            
    }
    int c=0;
    
        for(int i=1;i<a;i++)
    {
        if(s[i]==s[0])c++;
        
    }
    cout<<c+1<<'\n';
}
}