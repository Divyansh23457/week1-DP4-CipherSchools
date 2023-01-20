#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> v1,vector<int> v2){
        vector<int> ans(v1.size() + v2.size());
        int i=0,j=0,k=0;
        while(i<v1.size() && j<v2.size()){
            if(v1[i] <= v2[j]) ans[k++] = v1[i++];
            else ans[k++] = v2[j++];
        }
        while( i < v1.size()) ans[k++]= v1[i++]; 
        while( j < v2.size()) ans[k++] = v2[j++];
        return ans;
}

int main(){
    int n , m;
    cout<<"Enter value of n and m:";
    cin>>n>>m;
    vector<int> v1(n),v2(m);
    cout<<"Enter elements of vector 1:";
    for(int i=0 ;i<n;i++) cin>>v1[i];
    cout<<"Enter elements of vector 2:";
    for(int i=0;i<m;i++) cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    v1 = merge(v1,v2);
    cout<<"The merged array is :";
    for(int i : v1) cout<<i<<" ";
    cout<<endl;
    return 0;
    }