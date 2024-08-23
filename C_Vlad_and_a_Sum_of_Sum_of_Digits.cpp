#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)


int main(){
   //long long 
    int A[200001] = {0};
    for (int i = 1; i <= 200001; i++)
    {
        int s = 0;

        int r = i;
        while (r > 0)
        {
            s += (r % 10);
            r = r / 10;
        }
        A[i] = A[i - 1] + s;
    }
    test_case{
   int a;cin>>a;
      //sum(a);
      cout<<A[a]<<'\n';
    }
  
    
}