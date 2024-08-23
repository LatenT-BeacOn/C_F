#include<bits/stdc++.h>
using namespace std;
int main(){
int a,c=0;cin>>a;for(int i=0;i<a;i++){
    string s;cin>>s;
    if((s[0]=='+' && s[2]=='X') || (s[0]=='X' && s[2]=='+')) c++;
    else c--;
}
cout<<c<<'\n';

}