#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == 0 && b == 0 && c == 0)||(a==b && b==c))
            cout << 1 << " " << 1 << " " << 1 << endl;
        
        else if (a > b && a > c)
            cout << 0 << " " << a - b + 1 << " " << a - c + 1 << endl;
        else if (b > c && b > a)
            cout << b - a + 1 << " " << 0 << " " << b - c + 1 << endl;
        else if (c > a & c > b)
            cout << c - a + 1 << " " << c - b + 1 << " " << 0 << endl;
            else if(a==b && a>c)
            cout <<1 << " " << 1 << " " << a - c + 1 << endl;
             else if(a==c && a>b)
            cout <<1 << " " <<a-b+1 << " " << 1 << endl;
             else if(c==b && a<c)
            cout <<c-a+1 << " " << 1 << " " <<1 << endl;
          
    }
}