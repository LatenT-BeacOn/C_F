#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int A[a],sum=0;
        for(int i=0;i<a;i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
       
        int d=(c*(a+b)-sum);
        if(d%b==0 && d/b>0)
        cout<<(c*(a+b)-sum)/b<<endl;
      
        else
        
        cout<<-1<<endl;
    }
	// your code goes here
	return 0;
}
