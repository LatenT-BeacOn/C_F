#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    long long int a,b,x;cin>>a>>b>>x;
   long long int d=(a*((x/2)+1)-(b*(x/2))),c=((a*(x/2))-(b*(x/2)));
      if(x%2!=0)
      {
        cout<<d<<endl;
      }
        else
        cout<<c<<endl;
    }
}