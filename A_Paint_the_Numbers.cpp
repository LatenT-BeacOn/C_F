#include<bits/stdc++.h>
using namespace std;
int partion(int A[],int low,int high){
    int pivot=A[low];
    int i=low,j=high;
    while(i<j){
        while(A[i]<=pivot){i++;}
        while(A[j]>pivot){j--;}
        if(i<j){
            swap(A[i],A[j]);
        }
        }
        swap(A[low],A[j]);
        return j;

    

}
void quicsrt(int A[],int low,int high){
    if(low<high){int j=partion(A,low,high);
    
    quicsrt(A,low,j-1);
    quicsrt(A,j+1,high);}


}
int main(){
    int n;cin>>n;int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];

    }
    quicsrt(A,0,n-1);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
return 0;

}