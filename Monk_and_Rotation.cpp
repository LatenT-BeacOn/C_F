#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num; // Reading input from STDIN
    while (num--)
    {
        int a, b;
        cin >> a >> b;
        int A[a];
        for(int i=0;i<a;i++)
        cin >> A[i];
     b=b%a;
    for (int i = a - b; i < a; i++)
    {
        cout << A[i] << " ";
    }
    for (int i = 0; i < a - b; i++)
    {
        cout << A[i] << " ";
    }
    
    cout << '\n';
    }
}
