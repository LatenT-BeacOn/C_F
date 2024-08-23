#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;
        int l=0,L=0,m=0,M=0;
    
        for(int i=0;i<a;i++){
            int x,y;cin>>x>>y;
           if(x>0)m++;
           else if(x<0)l++;
           if(y>0)M++;
           else if(y<0)L++;
        }
       if(m*L*M*l==0)
           cout << "YES\n";
       
       else
           cout << "NO\n";
    }
}