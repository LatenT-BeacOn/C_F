#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)
const int N=1000000;
int main(){
    test_case{
        int a, b;
        cin >> a >> b;
        if (a % b != 0)
        {
            cout << 1 << endl;
            cout << a << endl;
        }
        else
        {
            cout << 2 << endl;
            cout << a - 1 << " " << 1 << endl;
            ;
        }
    }
    
  
    
}