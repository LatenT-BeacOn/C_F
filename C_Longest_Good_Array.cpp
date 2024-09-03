#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    
  int t;cin>>t;
  while (t--)
  {int a,b;cin>>a>>b;
  int i=1;
  int count=0;
    while(a<=b){
            a+=i;
            i++;
            count++;
    }
    cout<<count<<'\n';
  }
  
    
}