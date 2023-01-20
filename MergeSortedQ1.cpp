#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &v1,vector<int> &v2,int n,int m){
        int i = n-1,j=m-1,k=n+m-1;
        while(i>=0 && j>=0){
            if(v1[i] >= v2[j]) v1[k--]=v1[i--];
            else v1[k--]=v2[j--];
        }
        while(j>=0) v1[k--]=v2[j--];
        return;
}

int main(){
    int n , m;
    cout<<"Enter value of n and m:";
    cin>>n>>m;
    vector<int> v1(n+m,0),v2(m);
    cout<<"Enter elements of vector 1 in sorted order:";
    for(int i=0 ;i<n;i++) cin>>v1[i];
    cout<<"Enter elements of vector 2 in sorted order:";
    for(int i=0;i<m;i++) cin>>v2[i];
    merge(v1,v2,n,m);
    cout<<"The merged array is :";
    for(int i : v1) cout<<i<<" ";
    cout<<endl;
    return 0;
    }