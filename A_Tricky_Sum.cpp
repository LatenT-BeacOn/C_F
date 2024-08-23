#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        long long int a;cin>>a;
        long long int d=(a+1)*a/2;
        for(int i=1;i<=a;i*=2){
            d-=2*i;
            
        }
        cout<<d<<endl;
    }
}