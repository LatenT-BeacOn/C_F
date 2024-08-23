#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int A[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        int d = A[b-1];
        sort(A, A + a);
        reverse(A, A + a);
       //cout<<d<<'\n';
        vector<int>v,v1;
        for(int i=0;i<c;i++){
            v1.push_back(A[i]);
            //cout<<v1[i]<<" ";
        }
       // cout<<"\n";

        for (int i = c; i < a; i++)
        {
             v.push_back(A[i]);
            
        }
        // for(int i=0;i<v.size();i++){
        //     cout << v[i] << " ";
        // }
        // cout<<"\n\n";
        int x=0,y=0;
        for(int i=0;i<v1.size();i++){
            if(v1[i]==d){
                x=1;break;
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == d)
            {
                y = 1;
                break;
            }
        }

        if(x==1 && y==1)
            cout << "MAYBE\n";
            else if(x==1 && y==0){
                cout<<"YES\n";
            }
           else cout<<"NO\n";
    }
}