#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;
        int A[a],B[a];
        for(int i=0;i<a;i++)  cin>>A[i];
        for(int i=0;i<a;i++){
            cin>>B[i];
    }
    int count=0;
    for(int k=0;k<100000;k++){
        sort(A,A+a);
          int c=1;
          for(int i=0;i<a;i++){
            if(A[i]>B[i]){
                c=0;
                break;
            }

          }
          if (c == 1)
              break;
          else
          {
              A[a - 1] = 0;
              count++;
          }
    }
    cout<<count<<'\n';


    }
}