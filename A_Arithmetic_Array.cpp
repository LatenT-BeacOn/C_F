#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, sum = 0;
        cin >> a;
        int A[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
            sum += A[i];
        }
        cout <<(sum<a?1:sum-a) << endl;
    
    }
}