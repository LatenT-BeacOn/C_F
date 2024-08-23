#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[4];for(int i=0;i<4;i++)cin>>A[i];
    int c=0;
    sort(A,A+4);
    for(int i=0;i<4-1;i++){
        if(A[i]==A[i+1])c++;
    }
    cout<<c<<'\n';
}