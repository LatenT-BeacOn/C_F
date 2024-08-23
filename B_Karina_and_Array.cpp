#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;cin>>t;while (t--)
    {
     long long  int a;cin>>a;
      long long int A[a];
       for(int i=0;i<a;i++)
       {
        cin>>A[i];
       }
    
    //    for(int i=0;i<a;i++)
    //    {
    //     for(int j=0;j<a;j++)
    //     {
    //         if(A[i]*A[j]>m)
    //         m=A[i]*A[j];
    //     }

    //    }
    sort(A,A+a);
      long long int m=A[0]*A[1];
    for(int j=0;j<a-1;j++)
        {
            if(A[j+1]*A[j]>m)
            m=A[j+1]*A[j];
        }

       cout<<m<<endl;
    }
    
}