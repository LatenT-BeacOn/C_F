#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int t;cin>>t;while(t--){

     int a;cin>>a;
     string s[a];
     int c=0,ans=0;
     for(int i=0;i<a;i++){
        cin>>s[i];
     }
     for(int i=0;i<a;i++){
        c=0;
        for(int j=0;j<a;j++){
            if(s[i][j]=='1') c++;

        }
        if(c==1){
            ans=1;break;
        }
     }

        cout << (ans == 1 ? "TRIANGLE" : "SQUARE") << '\n';}
    
}