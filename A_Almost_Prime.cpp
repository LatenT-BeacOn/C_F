#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
   int ans=0;
    for(int i=2;i<=a;i++){
        int c=0;
        //cout<<i<<'\n';
        int x=i;
        for(int j=2;j<=x;j++){
            //cout << i << " " << i / j << " " << j << '\n';
            if(x%j==0){
                c++;
               while(x%j==0){
                x/=j;
               }
            }
            //cout <<c<<" ";
        }
        if(c==2) ans++;
    }
    cout<<ans<<'\n';

}