#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a;cin>>a;
        set<int>s;
        int c=0;
        for(int i=2;i*i<=a;i++){
            if(a%i==0 && s.count(i)==0)
            {
                s.insert(i);
                a/=i;
                c++;
                if(c==2)
                {
                    break;
                }
            }
        }
        if(s.size()<2 || s.count(a) || a==1) cout<<"NO\n";
        else {
            cout<<"YES\n";
            for(auto it:s)
            cout<<it<<" ";
            cout<<a<<'\n';
        }

    }
}