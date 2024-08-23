#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0;
    // if(isupper(s[0])) {
    //     c=1;
    // }
   
    for(int i=0;i<s.size();i++){
       if(isupper(s[i])){
          c++;
       } 
      
    }// cout<<c<<'\n';
    if(c==s.size()-1 && islower(s[0])){
        cout << (char)toupper(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            cout<<(char)tolower(s[i]);
        }
        cout << '\n';
    }
    else if (c == s.size()){
        for(int i=0;i<s.size();i++)
            cout << (char)tolower(s[i]);
   }
        else cout << s << '\n';
    
}