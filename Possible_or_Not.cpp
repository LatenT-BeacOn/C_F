#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;cin>>t;while(t--)
   {
    int a,b;
    cin>>a>>b;
    int A[a],c=0;
    vector<int>s;
    for(int i=0;i<a;i++)
    {
        cin>>A[i];
        if((A[i]&b)==b)
        {
            c++;
            s.push_back(A[i]);

        }
    }
    if(c==0)
    cout<<"NO"<<endl;

    else
    {
        
        int ans=s[0];
        for(int i=0;i<s.size();i++){
             ans=ans&s[i];
        }
        if(ans==b)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;

    }

   }
}