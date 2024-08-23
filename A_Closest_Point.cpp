#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        int a;cin>>a;
        int A[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        bool ok = false;
        if(a>2)
         ok=true;
        else{
            sort(A,A+a);
            if(A[1]-A[0]>1)
            ok=false;
            else ok=true;
        }
       
        cout<<(ok==false?"YES\n":"NO\n");
    }
    
}
