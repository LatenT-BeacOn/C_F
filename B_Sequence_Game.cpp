#include<bits/stdc++.h>
using namespace std;
#define test_case int t;cin>>t;while(t--)
int main(){test_case{
    int a;cin>>a;int A[a];for(int i=0;i<a;i++){
        cin>>A[i];
    }
    vector<int>v;
    for(int i=0;i<a-1;i++){
        if(A[i]>2 && A[i+1]-A[i]){
            while(A[i]){
                //cout<<A[i]<<" ";
                v.push_back(A[i]);
                A[i]=A[i]-1;
            }
        }
        v.push_back(A[i]);
    }
    cout<<v.size()<<'\n';
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<'\n';
}
    
  
    
}