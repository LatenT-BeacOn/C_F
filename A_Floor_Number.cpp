#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b,sum=0,count=0;
        cin >> a >> b;
        if (a == 1 || a == 2)

           cout<<1<<endl;
       else
    {
        for(int i=0;i<100000;i++)
        {
            sum=sum+b;
            if(sum>a-2)
           // count++;
           break;
            else 
            count++;
           // break;
        }
        if(count*b<a-2)
       
        cout<<count+2<<endl;
        else
       
        cout<<count+1<<endl;
    }
    }
    getch();
} 
