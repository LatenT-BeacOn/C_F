#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int A[N];
int main(){
    int a;cin>>a;
    for(int i=0;i<a;i++){
        cin>>A[i];
    }

    int b;cin>>b;
    sort(A,A+a);
    while(b--){
        int x,y;
        cin>>x>>y;
        int l=lower_bound(A,A+a,x)-A;
        int m=upper_bound(A,A+a,y)-A;
        cout<<m-l<<" ";
    }
}