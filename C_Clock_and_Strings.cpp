#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=0;
       if(a>b){
        swap(a,b);

        }
        for (int i = a + 1; i < b; i++)
        {
            // cout<<i<<" ";
            if (i == c || i == d)
                count++;
            // cout<<'\n';
        }
        if(count==2 || count==0) cout<<"NO\n";
        else cout<<"YES\n";
       
      }
    }
