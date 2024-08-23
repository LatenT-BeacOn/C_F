#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        vector<string>s(b);
        for(int i=0;i<a;i++){
              cin>>s[i];
        }

        int min_h=INT_MAX,max_h=INT_MIN, min_k=INT_MAX,max_k=INT_MIN;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(s[i][j]=='#'){
                    if(i<min_h) min_h=i;
                    if(i>max_h)  max_h=i;
                    if(j<min_k)   min_k=j;
                    if(j> max_k) max_k=j;
                 }
            }
        }
        int fast=(min_h+max_h)/2;
        int  scnd=(min_k+max_k)/2;
        cout<<fast+1<<" "<<scnd+1<<'\n';
    

    }
}