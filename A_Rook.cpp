#include<bits/stdc++.h>
using namespace std;
int main(){
   int a;cin>>a;string s,s1="abcdefgh";cin>>s;

   for(int i=0;i<8;i++){
    if(s[0]==s1[i]){
        continue;
    }
    else cout<<s1[i]<<s[1]<<'\n';



   }
   for (int i = 0; i < 8; i++)
   {
       if (s[1]-'0' == 1+i)
       {
           continue;
       }
       else
           cout << s[0] << 1+i<< '\n';
   }
}