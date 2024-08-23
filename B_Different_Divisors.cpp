#include<bits/stdc++.h>
using namespace std;
bool prime(int a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return true;
        }
    }
    return false;

}
int main(){
    int t;cin>>t;while (t--)
    {
        int a;cin>>a;
        int d1=1+a;
        while(prime(d1)) d1++;
        int d2=d1+a;
        while(prime(d2)) d2++;
        cout<<d1*d2<<'\n';
    }
    
}