#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b,c=0;int A[a],B[a]; vector<int>v(a);
        vector<int>vb(a);
        for(int i=0;i<a;i++){
            cin>>A[i];
            v.push_back(A[i]);
        }
        for (int i = 0; i < a; i++)
        {
            cin >> B[i];
            vb.push_back(B[i]);

        }
        sort(v.begin(),v.end());
        sort(vb.begin(),vb.end());
        for (int i = 0; i < a; i++)
        {
            if(v[i]>vb[i]) c++;

           
        }
        if(c<b) cout<<"NO\n";
        else{
            cout<<"YES\n";
            
            for(int i=0;i<a;i++)
            cout<<B[i]<<" ";
        }
        }
  
    
}