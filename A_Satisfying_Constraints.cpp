#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;
        vector<int>A,B,C;
       long long int x, y;
       for (int i = 0; i < a; i++)
        {
            cin>>x>>y;
            if(x==1) A.push_back(y);
            else if(x==2) B.push_back(y);
            else C.push_back(y);
        }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        int ans=0;
        for(int i=0;i<C.size();i++){
            if(C[i]>=A[A.size()-1] && C[i]<=B[0]) ans++;
        }
        cout <<max(B[0] - A[A.size() - 1]-ans+1,0) << '\n';
    }
}