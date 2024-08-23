#include<iostream>
using namespace std;
int main(){
    int a,c=0;cin>>a;
    int A[a];
    for(int i=0;i<a;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<a;i++)
    {
        if(A[i]==1 || (A[i+1]==1 && A[i-1]==1))
        c++;
    }
    cout<<c<<endl;
}