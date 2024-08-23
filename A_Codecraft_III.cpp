#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a,k;
    cin >> a;
    if (s == "January")  k = 1;
   else if (s == "February")  k = 2;
   else if (s == "March")     k = 3;
   else if (s == "April")    k = 4;
   else if (s == "May")    k = 5;
  else  if (s == "June")     k = 6;
   else if (s == "July") k = 7;
   else if (s == "August")  k = 8;
   else if (s == "September")k = 9;
   else if (s =="October")   k = 10;
   else if (s== "November")   k = 11;
   else if (s== "December")   k = 12;

     int key=(k+a)%12;
     if(key==1) cout<<"January"<<'\n';
     else if(key==2) cout<<"February"<<'\n';
     else if(key==3) cout<<"March"<<'\n';
     else if(key==4) cout<<"April"<<'\n';
     else if(key==5) cout<<"May"<<'\n';
     else if(key==6) cout<<"June"<<'\n';
     else if(key==7) cout<<"July"<<'\n';
     else if(key==8) cout<<"August"<<'\n';
     else if(key==9) cout<<"September"<<'\n';
     else if(key==10) cout<<"October"<<'\n';
     else if(key==11) cout<<"November"<<'\n';
     else if(key==0) cout<<"December"<<'\n';
}