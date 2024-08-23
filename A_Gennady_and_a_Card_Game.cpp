#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<5;i++)
    {
        string A;
        cin>>A;
         if(s[0]==A[0] || s[1]==A[1])
       c=1;
    }


    cout<<(c==1?"YES":"NO")<<endl;

   
    
}
