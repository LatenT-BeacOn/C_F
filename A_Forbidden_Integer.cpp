#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b,c;
        cin>>a>>b>>c;
         if(c!=1 )
         {
            cout<<"YES"<<'\n';
            cout<<a<<'\n';
            for(int i=0;i<a;i++) cout<<1<<" ";
            cout<<'\n';

         }
         else{
            if(a%2==0 && b>=2){
                cout<<"YES\n";
                cout<<a/2<<'\n';
                for(int i=0;i<a/2;i++)cout<<2<<" ";
                cout<<'\n';


            }
            else if(b>=3){
                cout<<"YES"<<'\n';
                cout<<a/2<<'\n';
                cout<<3<<" ";
                //a=a-3;
                for(int i=0;i<(a/2)-1;i++)cout<<2<<" ";
                cout<<'\n';
            }
            else
                cout << "NO"<<'\n';
         }
         
       
        }
    }
