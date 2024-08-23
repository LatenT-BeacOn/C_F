#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,sum=0,m=0;cin>>a;
        int A[a][3];
       for(int i=0;i<a;i++){
        for(int j=0;j<3;j++){
            cin>>A[i][j];
        }
       }
        for(int i=0;i<3;i++){
       for(int j=0;j<a;j++)
       {
        sum+=A[j][i];
       }
        if(sum!=0){ m=1;}
    }
    cout<<(m==0?"YES":"NO")<<'\n';
}
   