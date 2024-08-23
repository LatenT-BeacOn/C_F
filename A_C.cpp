#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int count=0;
        for(int i=0;i<100000;i++)
        {
            if(a>b)
            b+=a;
            else
            a+=b;
            count++;

            if(a>c || b>c)
            break;
        }
        cout<<count<<endl;
    }
}