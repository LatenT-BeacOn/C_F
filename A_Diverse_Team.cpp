#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    int A[a];
    vector<int>v;
    set<int>s;

    for(int i=0;i<a;i++){
        cin>>A[i];
        if(!s.count(A[i])){
            v.push_back(i);
            s.insert(A[i]);
        }
    }
    if(v.size()<b) cout<<"NO\n";
    else {
        cout<<"YES\n";
        for(int i=0;i<b;i++){
            cout<<v[i]+1<<" ";
        }
        cout<<endl;
    }

}







