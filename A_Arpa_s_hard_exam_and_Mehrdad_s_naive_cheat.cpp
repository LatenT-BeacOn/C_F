#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    if(a==0) cout<<1<<'\n';
    else if (a % 4 == 0)
         cout << 6 << '\n';
     else if (a % 4 == 1)
         cout << 8 << '\n';
     else if (a % 4 == 2)
         cout << 4 << '\n';
     else if (a % 4 == 3)
         cout << 2 << '\n';
}