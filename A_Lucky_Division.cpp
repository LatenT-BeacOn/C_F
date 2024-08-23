#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    bool ans=false;
    for(int i=4;i<=a;i++){
        int r=i;
        int c=0;
        while(r>0){
           int x=r%10;
            if(x==4 || x==7){
                r /= 10;
                continue;
            }
            else{
                c=1;
                break;
            }
            

        }
        if(c==0 && a%i==0) ans=true;
       
    }
    if(ans) cout<<"YES\n";
    else cout<<"NO\n";
}