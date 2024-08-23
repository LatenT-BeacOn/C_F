#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {int a[3];
    cin>>a[0]>>a[1]>>a[2];
    if(a[2]>a[1])
    a[1]=a[2]-a[1]+a[2];
   cout<<(a[1]>a[0]?1:a[1]==a[0]?3:2)<<endl;
        /* code */
    }
    
}
