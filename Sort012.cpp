#include<bits/stdc++.h>
using namespace std;

void sort012(int *nums,int n){
        int p = -1;
        int r = n;
        int q = 0;
        while(q<r){
            if(nums[q] == 0) swap(nums[++p],nums[q]);
            if(nums[q] == 2) {swap(nums[q],nums[--r]);continue;}
            q++;
        }
        return;
}

int main(){
    int *arr;
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    arr = new int[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort012(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
    }