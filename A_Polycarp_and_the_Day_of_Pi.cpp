#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s="314159265358979323846264338327";
        string d;
        cin>>d;
        int c=0;
        for(int i=0;i<d.size();i++)
        {
            if(d[i]==s[i])
            c++;
            else
            break;
        }
        cout<<c<<endl;
    }
}