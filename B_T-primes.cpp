#include<bits/stdc++.h>
using namespace std;
int N=1000000;
bool A[1000001];
void check(){
    A[1]=true;
    for(int i=2;i*i<=N;i++){
        if(A[i]==false){
            for(int j=i*i;j<=N;j+=i) { 
                A[j]=true;             
                                        
            }
        }
    }
}

int main(){
    check();
    int t;cin>>t;while(t--){
        long long int b;   
        cin >> b;
        long long int d = sqrt(b);
        if (d * d == b && A[d] == false)      
         cout << "YES" << '\n';
        else
            cout << "NO" << '\n';

        // cout << (c == 1 ? "YES" : "NO") << '\n';
    }
    }

