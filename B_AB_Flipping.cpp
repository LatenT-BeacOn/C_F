#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)

int main(){
    test_case{
        int a,c=0;cin>>a;string A;cin>>A;
        int s1=0,s2=0;
        for(int i=0;i<A.size();i++){
            if(A[i]=='B') {s1++;}
            else break;
           
        }
        for (int i = A.size()-1; i>=0; i--)
        {
            if (A[i] == 'A')
            {
                s2++ ;
                
            }
            else break;
        }
       // cout<<s1<<" "<<s2<<'\n';
        // if(s1>s2) cout<<0<<'\n';
        // else
        cout<<(a-s1-s2>0?a-s1-s2-1:0)<<'\n';

    }

    
  
    
}