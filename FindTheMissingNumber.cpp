#include<bits/stdc++.h>
using namespace std;

int MissingNumber(int *arr,int n){
    //N:7
    //6 5 4 1 8 2 7
    //1 2 3 4 5 6 7 8
    //
    //Required array : 1 to N+1
    // Given : 1 to N
    int _xor = 0;
    for(int i = 1;i<=n+1;i++) _xor ^= i;
    for(int i =0 ;i<n;i++) _xor ^= arr[i];
    return _xor;

}

int main(){
    int *arr;
    int n;
    cout<<"Enter N:";
    cin>>n;
    arr= new int[n];
    cout<<"Enter values:"<<endl;
    for(int i=0 ;i<n;i++) cin>>arr[i];
    cout<<MissingNumber(arr,n)<<endl;
    return 0;
    }