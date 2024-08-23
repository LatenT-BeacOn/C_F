#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;int m=0;
    cin>>s;
for(int i=0;i<s.size();i++){
        if(s[i]=='H' || s[i]=='Q' ||  s[i]=='9')
       { m=1;
       break;
       }
 }
    cout<<(m==1?"YES":"NO")<<'\n';
}