#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        
       long long int a,sum=0;cin>>a;while (a!=0)
        {
           
            sum+=a;
            a=a/2;
        }
        cout<<sum<<'\n';
    }
    
}