#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
      
       string A;
        int A1 = 0, B = 0, C = 0,O=0;
        for (int i = 1; i <= a; i++)
        {
          cin>>A;
         
           
       
         if (A == "A")
            {
                A1++;
            }
            else if (A == "B")
            {
                B++;
            }
            else if(A=="O")
            O++;

            else if(A=="AB")
            {
                C ++;
              
            }}
        // if (C > 1)
        //     cout << << endl;
       //else
            cout << (max(A1, B))+O +C<< endl;
    }
    return 0;
}
