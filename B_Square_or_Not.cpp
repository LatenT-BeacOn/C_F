#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        /* code */
        int a;cin>>a;
        string s;cin>>s;
        int x=sqrt(a);
        if(x*x!=a) cout<<"No\n";
        else if(a==4 && s[0]==s[1] && s[1]==s[2] && s[2]==s[3] && s[0]=='1') 
        cout<<"Yes\n";
        else {
            int c0=0,m=1;
             bool check = true;
            for(int i=0;i<a-1;i++){
            if(s[i]=='0') 
            c0++;
            
            if (s[i] == '0' && s[i+1]=='1')
            {
                if(c0!=x-2){
                    check=false;
                    break;
                }
                c0=0;m=0;

            }
            
            }
            if((c0==0 && m!=0) || !check)
            cout<<"No\n";
            else 
                cout << "Yes\n";
        }
        
        
    }
    
  
    
}