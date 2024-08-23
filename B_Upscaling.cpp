#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
    int a;cin>>a;
    vector<string>v(2);

    for(int i=0;i<a;i++){
        if(i%2==0){
            v[0].push_back('#');
            v[0].push_back('#');
        }
        else 
        {
            v[0].push_back('.');
            v[0].push_back('.');
        }
    }
       // cout<<v[0]<<'\n';
        for (int i = 0; i < a; i++)
        {
            if (i % 2 == 0)
            {
                v[1].push_back('.');
                v[1].push_back('.');
            }
            else
            {
                v[1].push_back('#');
                v[1].push_back('#');
            }
        }
       // cout<<v[1]<<'\n';
       for(int i=0;i<a;i++){
        if(i%2==0){
            cout<<v[0]<<'\n'<<v[0]<<'\n';
        }
        else cout<<v[1]<<'\n'<<v[1]<<'\n';
       }
      // cout<<'\n';

}
}