#include<bits/stdc++.h>
using namespace std;
void slve(){
   int a,b,c;
   cin>>a>>b>>c;
   if ((b+c)%3>c)
       cout<<-1<<endl;
   else
       cout<<a+(b+c+2)/3<< endl;
}
int main(){
    int t;cin>>t;while(t--){
        slve();
    }
    }
