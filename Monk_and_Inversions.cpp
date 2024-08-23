#include<bits/stdc++.h> 
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        /* code */
        int a;cin>>a;
        int A[a][a];
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                cin>>A[i][j];
            }
        }
        int c=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                for(int k=i;k<a;k++){
                    for(int l=j;l<a;l++){
                        if(A[i][j]>A[k][l])
                        c++;
                    }
                }
            }
        }
        cout<<c<<'\n';
    }
    
}