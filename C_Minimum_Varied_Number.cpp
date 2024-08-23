#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;
      vector<int>v;
          //int s=a;
            for(int i=9;i>=1;i--){
             
              if(a-i>=0){
                v.push_back(i);
                a-= i;
              }
            
           }
           for(int i=v.size()-1;i>=0;i--)
          cout<<v[i]; cout<<'\n';


        
    }
    
  
    
}