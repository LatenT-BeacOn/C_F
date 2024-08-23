#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;int A[a],B[a];
    for(int i=0;i<a;i++){
        cin>>A[i];
    }
    for(int i=0;i<a;i++){
        cin>>B[i];
    }
    int c=0;
    for(int i=0;i<a-1;i++){
        for(int j=i+1;j<a;j++){
            //for(int k=i+1;k<a;k++){
            if(A[i]+A[j]>B[i]+B[j]){ c++;}
            else continue;
           // }


        }
    }
    cout<<c<<'\n';

}