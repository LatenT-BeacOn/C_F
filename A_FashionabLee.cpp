#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while (a--)
    {
       int n;
       cin>>n;
       cout<<((n%4==0)?"YES":"NO")<<endl;
    }
    
}