#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    char A[a][b];
    int c=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
              cin>>A[i][j];
              if(A[i][j]=='C' || A[i][j]=='M' || A[i][j]=='Y')
              {
                c=1;
              }
        }
    }
    if(c==1)
    cout<<"#Color"<<'\n';
    else
    cout<<"#Black&White"<<'\n';
}