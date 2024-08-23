#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
       
        if(s[0]==s[s.size()-1])
        cout<<-1<<endl;
        else
        cout<<s.size()-1<<endl;

    }
    
}