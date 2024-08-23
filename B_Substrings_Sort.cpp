#include <bits/stdc++.h>
using namespace std;
bool withsz(string s,string t){
    return s.size()<t.size();
}

int main()
{
    int a;
    cin >> a;
    string s[a];
    for(int i=0;i<a;i++){
        cin>>s[i];
    }
    sort(s,s+a,withsz);
    // for (int i = 0; i < a; i++)
    // {
    //     cout << s[i] << '\n';
    // }
    int c=0;
    for(int i=0;i<a-1;i++){
        if(s[i+1].find(s[i])==string::npos){
            c=1;break;
        }
    }
    if(c==1) cout<<"NO\n";
    else {
        cout<<"YES\n";
        for(int i=0;i<a;i++){
            cout<<s[i]<<'\n';
        }
    }




}