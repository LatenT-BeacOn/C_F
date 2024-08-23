#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,sc="",y="hello";
    cin>>s;
    int j = 0;
    for(int i=0;i<s.size();i++){
        
       if(s[i]==y[j]) j++;
    }
    cout<<(j==5?"YES\n":"NO\n");
  
}