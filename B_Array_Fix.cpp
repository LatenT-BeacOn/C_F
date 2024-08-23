#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        /* code */
        int a;cin>>a;int A[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        vector<int>v;
        v.push_back(A[a-1]);
        for(int i=a-1;i>=0;i--){
            if(v[v.size()-1]>=A[i]){
                v.push_back(A[i]);
            }
            else {
                while(A[i]){
                    v.push_back(A[i]%10);
                    A[i]/=10;
                }
            }
        }
        int c=0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]<v[i+1]){
                c=1;
                break;
            }
        }
        cout<<(!c?"YES\n":"NO\n");
    }
    
}