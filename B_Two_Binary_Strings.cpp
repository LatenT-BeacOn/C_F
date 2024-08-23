#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    
  int t;cin>>t;while(t--){
    string a,b;cin>>a>>b; int c=0;
    for(int i=0;i<a.size();i++){
    //     if(a[i]=='0' && b[i]=='0') continue;
    //     else if(a[i]=='1' && b[i]=='1'){
    //         c=0;
    //         break;
    //    }
        if (a[i]==b[i] && a[i+1]==b[i+1] && a[i]=='0' && a[i+1]=='1'){
                c = 1;}
  }
  cout<<(c==1?"YES\n":"NO\n");  
}
}