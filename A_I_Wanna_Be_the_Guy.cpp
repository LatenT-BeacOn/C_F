#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    // int b;cin>>b;int A[b];int l[a+1]={0};
    // for(int i=1;i<=b;i++){
    //     cin>>A[i];
    //      l[A[i]]++;
    // }
    // int c;cin>>c;int B[c];
    // for(int i=1;i<=c;i++)
    // {
    //     cin>>B[i];
    //     l[B[i]]++;
    // }
    // for(int i=1;i<=a;i++)
    // {
    //     if(l[i]==0)
    //     {x=1;
    //     break;}

    // }
    // cout<<(x==1?"Oh, my keyboard!":"I become the guy.")<<'\n';
    int b;
    cin >> b;
    vector<int> A(a);
    int c;
    cin >> c;
    vector<int> B(a);
    set<int> f;
    for (int i = 0; i < b; i++)
    {
        cin >> A[i];
       // f.insert(A[i]);
    }
    for (int i = 0; i < b; i++)
    {
       
        f.insert(A[i]);
    }
    for (int i = 0; i < c; i++)
    {
        cin >> B[i];
       // f.insert(B[i]);
    }
    for (int i = 0; i < c; i++)
    {
       
        f.insert(B[i]);
    }
    cout << (a == f.size() ? "I become the guy." : "Oh, my keyboard!") << '\n';
}