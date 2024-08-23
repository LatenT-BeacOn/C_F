#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a; int A[a];vector<int>v;
        for(int i=0;i<a;i++){
            cin>>A[i];
            int s=A[i]-i+1;
            v.push_back(s);

        }
        v.push_back(INT_MAX);
        sort(v.begin(),v.end());long long int ans=0,c=0;
        
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]){
                c++;
            //  if(c+1==v.size()){
            //         ans=c*(c+1)/2;
            //         break;
            //     }
            }
            else
            {
               
                ans=ans+(c*(c+1)/2);
                c=0;
            }
        }
        cout<<ans<<'\n';

    }

}