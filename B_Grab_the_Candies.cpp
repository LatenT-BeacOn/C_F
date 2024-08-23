#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;while(t--){
        int a,sum=0,sum1=0;cin>>a;int A[a];for(int i=0;i<a;i++){ cin>>A[i];
            if(A[i]%2==0)
            sum+=A[i];
            else 
            sum1+=A[i];
            
            
            }
            cout<<(sum>sum1?"YES":"NO")<<endl;

    }
}