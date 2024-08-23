#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
   
    pair<int,int>A[1005];

    for(int i=0;i<n;i++){
        cin>>A[i].first>>A[i].second;
    }
    sort(A,A+n);
    int m = 0, l = 0;
    for(int i=0;i<n;i++){
        
        if(A[i].first<s)
        {
            s+=A[i].second;;
            l++;
           // cout<<s<<'\n';
        }
        else {break;}
    }

    cout<<(l==n?"YES":"NO")<<'\n';
    
} 