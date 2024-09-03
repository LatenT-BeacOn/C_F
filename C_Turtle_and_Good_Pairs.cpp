#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        /* code */
        int a;cin>>a;
        string s,s1,s2;
        cin>>s;
        sort(s.begin(),s.end());
        for(int i=0,j=a-1;i<j;i++,j--){
            s1+=s[i];
            s1+=s[j];
        }
        if(a%2!=0) s1=s1+s[(a/2)];
            cout << s1 << '\n';
        }
}