#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,sum=0;cin>>a;
    int A[a];
    for(int i=0;i<a;i++){
        cin>>A[i];
        sum+=A[i];
    }
   sort(A,A+a);
   int cnt=0,ans=0,p=0;
   for(int i=a-1;i>=0;i--){
    ans+=A[i];
    cnt++;
    if((sum/2)+1<=ans){
        p=1;
        break;
    }
   }
   cout<<cnt<<'\n';
}