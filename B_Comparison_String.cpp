#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        /* code */
        int a,c=0,max=0;cin>>a;string s;cin>>s;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            c++;
            else
            c=0;
            if(c>max)
            max=c;
        }
        cout<<max+2<<'\n';
    }
    
}