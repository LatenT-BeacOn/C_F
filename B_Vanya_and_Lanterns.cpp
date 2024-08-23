#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    int A[a];
    for(int i=0;i<a;i++){
        cin>>A[i];
    }
sort(A,A+a);
int distnce=0;
for(int i=0;i<a-1;i++){
    if(A[i+1]-A[i]>distnce){
        distnce=A[i+1]-A[i];

    }
}
double x=(double)distnce/2;
double y=A[0],m=b-A[a-1];
double ans=max(x,max(y,m));

cout << fixed << setprecision(10) << ans<<'\n';
}