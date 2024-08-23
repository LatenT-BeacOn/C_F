#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,sum=0;cin>>a>>b;
    int n=a;
     while(n!=0){
        n%=10;
        sum+=n;
        n/=10;
     }
     if(sum%b==0) cout<<a;
     else{
        if(a<10 && b<10) cout<<a+(a-b)<<'\n';
        else if(a<10 && b==10) cout<<a+(a-b)+10<<'\n';
        else{
            if(a%10>5) cout<<a+(b-2)<<'\n';
            else cout<<a+(b-1)<<'\n';
        }
     }
   
    
}