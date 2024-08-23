#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string b="codeforces";
        string A;
       
        cin>>A;
        int count=0;
        for(int i=0;i<10;i++)
        {
            if(A[i]!=b[i])
            count++;
        }
        cout<<count<<endl;
        
    }
}
