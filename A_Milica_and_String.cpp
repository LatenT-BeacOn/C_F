#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b,B=0,c=0;cin>>a>>b;
        string s;cin>>s;
        for(int i=0;i<s.size();i++){
            if (s[i] == 'B')
                B++;
        }
       // cout<<B<<"";
        if(B==b) cout<<0<<'\n';
       else if(b>B)
        {
            for(int i=0; i<s.size();i++){
                if (s[i] == 'A'){
                    B++;
                    if(B==b){
                        c=i;
                        break;

                    }
                    }
            }
            cout<<1<<'\n'<<c+1<<" "<<'B'<<'\n';

       }
       else if(B>b)
       {
        int d=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='B')
            B--;
            if(B==b){
                d=i;
                break;

            }
        }
        cout<<1<<'\n'<<d+1<<" "<<'A'<<'\n';

       }
       
        
    }

}