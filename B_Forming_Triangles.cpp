#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+10;
int A[N];
#define test_case int t;cin>>t;while(t--)
int main(){
    test_case{
        int a;cin>>a;
        map<int,int>Q;
        for(int i=0;i<a;i++){
            cin>>A[i];Q[A[i]]++;
        }
        sort(A,A+a);
         ll int c=0;
        for(int i=0;i<a;i++){
           if(Q[A[i]]>1)
           {
            c+=(Q[A[i]]*(Q[A[i]]-1)*(Q[A[i]]-2)/6);
            c+=((Q[A[i]]*(Q[A[i]]-1)/2)*i);
            Q[A[i]]=0;
           }
            }
        
        cout<<c<<'\n';
    }
    
}
    
