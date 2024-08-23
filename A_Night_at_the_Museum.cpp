#include<iostream>
using namespace std;
int main()
{
    string A;
    cin>>A;
    int k='a',ans=0;
    for(char c:A)
    {
        int d=abs(k-c);
        ans+=min(d,26-d);
        k=c;
    }
    cout<<ans<<endl;
}