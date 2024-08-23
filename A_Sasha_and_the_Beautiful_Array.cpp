#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        // int a;cin>>a;int A[a];for(int i=0;i<a;i++){
        //     cin>>A[i];
        // }
    //     sort(A,A+a);
    //    // reverse(A,A+a);
    //     int sum=0;
    //     for(int i=0;i<a-1;i++){
    //         sum+=abs(A[i]-A[i+1]);
    //     }

       // cout<<sum<<'\n';
        long long int  n;
        cin >> n;
        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        long long int  mxi = *max_element(v.begin(), v.end());
        long long int mni = *min_element(v.begin(), v.end());

        cout<<mxi<<" "<<mni<<'\n';
    }
}