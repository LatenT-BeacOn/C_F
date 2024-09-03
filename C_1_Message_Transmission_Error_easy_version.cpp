#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=s.size()/2;
    if(s.size()%2!=0){
        string s1="",s2="";
        for(int i=0;i<=a;i++){
            s1.push_back(s[i]);
            s2+=s[i+a];
        }
        if (s1 != s2) cout << "NO\n";
        else cout<<"YES\n"<<s1<<'\n';

    } 
    
    // cout<<s1<<'\n'<<s2<<'\n';
    
    else {
    string s1 = "", s2 = "";
    for (int i = 0; i < a; i++)
    {
        s1.push_back(s[i]);
        s2 += s[i + a];
    }
    if (s1 != s2)
        cout << "NO\n";
    else
        cout << "YES\n"
             << s1 << '\n';

    //         cout<<"YES\n";
    //         cout<<s1<<'\n';
    //     
    //     //else cout<<"NO\n";
     }
}