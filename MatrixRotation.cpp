#include<bits/stdc++.h>
using namespace std;

void print(int **arr,int n,int m){
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        return;
}

void transpose(int **arr,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    return;
}

void rotate(int **arr,int n,int m){
    transpose(arr,n,m);
    print(arr,n,m);
    int i=0,j=m-1;
    while(i<j){
        for(int k=0;k<n;k++){
            swap(arr[k][i],arr[k][j]);
        }
        i++;
        j--;
    }
    return ;
}

int main(){
    int n,m;
    cin>>n>>m;
    int **arr =new int*[n];
    for(int i=0;i<n;i++) arr[i]=new int[m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    rotate(arr,n,m);
    print(arr,n,m);
    return 0;
    }