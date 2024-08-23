#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b,c;cin>>a>>b>>c;
        if(a==b && a!=1) cout<<"YES\n";
        else{
       int d=(b-a+1);
       if(d%2==0){
        if(d/2<=c) cout<<"YES\n";
        else cout<<"NO\n";

       }
       else
       {
           int x = (d / 2);
           if (a % 2 != 0 || b % 2 != 0)
           {

               if (x + 1 <= c)
                   cout << "YES\n";
               else
                   cout << "NO\n";
           }
           else if (a % 2 == 0 && b % 2 == 0)
           {if(x<=c) cout<<"YES\n";
           else cout<<"NO\n";

           }
       }
       }
    }
}