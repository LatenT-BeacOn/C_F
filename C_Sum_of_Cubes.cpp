#include<bits/stdc++.h>
using namespace std;
const long long N = 1'000'000'000'000L;
set<long long>S;
void cubes(){
    for (long long i = 1; i * i * i <=N ; i++)
    {
       S.insert(i*i*i);
    }
}
void check(){
    long long x;cin>>x;
    //int l=1;
    for(long long i=1;i*i*i<=x;i++){
        long long y=x-(i*i*i);
         if(S.find(y)!=S.end())
         {
            
            cout << "YES\n";
            return;
         }

    }
    cout << "NO\n";
    
}
int main()
{
    cubes();
    int t;cin>>t;
    while (t--)
    {   
        /* code */
      
      check();
      
    }
}