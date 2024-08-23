#include<bits/stdc++.h>
using namespace std;
int  main(){
    string s1,s2,s3;
    cin>>s1;int m=0;
    for(int i=0;i<s1.size();i++){
        s3+=s1[i];
        if(s1[i]!='a') s2+=s1[i];
        if(s1==s2+s3)
        {
            m=1;break;
        }
    }
    cout << (m == 1 ? s3 : ":(")<<'\n';
}