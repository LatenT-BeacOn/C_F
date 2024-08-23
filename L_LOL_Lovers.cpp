#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    string s;cin>>s;int l=0,o=0,L=0,O=0;
    for(int i=0;i<a;i++){
       
            if(s[i]=='L') l++;
            else o++;
      
    }
    if (l>2 || o>2)
        cout << 1 << '\n';
    else
        cout << 1 << '\n';
}