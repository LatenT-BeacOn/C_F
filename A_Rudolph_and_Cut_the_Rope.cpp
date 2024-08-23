#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,c=0;cin>>a;
        for(int i=0;i<a;i++)
        {
            int x,y;
            cin>>x>>y;
            if(x>y)
            c++;

        }
        cout<<c<<endl;
    }
}