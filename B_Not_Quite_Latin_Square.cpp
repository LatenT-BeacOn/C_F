#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        /* code */
       char s[9];
        int A=0,B=0,C=0;
        for(int i=0;i<9;i++){
            cin>>s[i];
            if(s[i]=='A')A++;
             if(s[i]=='B') B++;
             if(s[i]=='C') C++;
        }
        if(A!=3)cout<<"A\n";
        else if(B!=3) cout<<"B\n";
        else cout<<"C\n";
    }
    
}