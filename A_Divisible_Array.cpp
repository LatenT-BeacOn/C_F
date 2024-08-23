#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        int A[n];
        for (int i=1;i<=n;i++){
            A[i-1]=i*2;
        }
        for (int i=0;i<n;i++)
        {
            cout<<A[i]<< " ";
        }
        cout<<'\n';
    }

}
