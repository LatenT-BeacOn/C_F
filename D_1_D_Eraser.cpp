#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b;cin>>a>>b;
        string s;cin>>s;
        int c=0,ans=0,j=0;
        for(int i=0;i<a;i++){
            if(s[i]=='B'){
                c++;j=0;
            }
            else{//cout<<c<<" ";
            i++;
            j++;
            if(j==)
                ans+=((c/b)+(c%b));
                c=0;
            }
        }
       // cout<<'\n';
        if(c>0 && ans==0) cout<<(c/b)+(c%b)<<'\n';
        else{
            if(c>0){
            ans += ((c / b) + (c % b));}
            cout << ans << '\n';
        }
    }
}