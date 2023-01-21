#include<bits/stdc++.h>
using namespace std;

vector<int> spiraltraversal(int **arr,int n,int m){
    vector<int> ans;
    int top = 0,bottom = n-1,left = 0,right = m-1;
    while(top <= bottom && left <= right){
        for(int i=left ;i<=right;i++)
            ans.push_back(arr[top][i]);
        top++;
        for(int i=top;i<=bottom;i++)
            ans.push_back(arr[i][right]);
        right--;
        if(left > right || top > bottom) break;
        for(int i=right;i>=left;i--)
            ans.push_back(arr[bottom][i]);
        bottom--;
        for(int i=bottom;i>=top;i--)
            ans.push_back(arr[i][left]);
        left++;
    }
    return ans;
}

int main(){
    int n,m;
    cout<<"Enter number of rows and columns:";
    cin>>n>>m;
    int **arr = new int*[n];
    for(int i=0;i<n;i++) arr[i] = new int[m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) 
            cin>>arr[i][j];
    vector<int> spiral = spiraltraversal(arr,n,m);
    for(int i : spiral) cout<<i<<" ";
    cout<<endl;
    return 0;
}