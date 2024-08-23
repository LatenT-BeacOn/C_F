#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;
    string s;
    cin >> s;
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    // if (a == 'R')
    // {
        for (int i = 0; i < s.size(); i++)
        {
            for(int j=0;j<s1.size();j++){
            if (s[i] == s1[j]){
                if (a == 'R')
                    cout << s1[j - 1];
                    else
                    cout << s1[j + 1];
            
            
            }
               
        }
   }
    
}