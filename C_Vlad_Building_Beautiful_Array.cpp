
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)
const int N=1000000;
int main(){
    test_case{
                int a,evn=0,odd=0;cin>>a;int A[a];for(int i=0;i<a;i++){
                    cin >> A[i];
                    if (A[i] % 2 == 0)
                    {
                        evn++;
                    }
                    else
                        odd++;
        }
       
        if(evn==a || odd==a) cout<<"YES"<<'\n';
        else{
            sort(A,A+a);
           if(A[0]%2!=0)cout<<"YES"<<'\n';
           else cout<<"NO"<<'\n';
        }
    }
    
  
    
}