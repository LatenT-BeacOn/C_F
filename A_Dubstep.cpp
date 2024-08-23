#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)
const int N=1000000;
int A[N];
int main(){
    string s,s1="WUB",s2=" ";cin>>s;
    while (s.find(s1) != -1)
    {
        s.replace(s.find(s1), s1.length(), s2);
    }
    cout << s;
}