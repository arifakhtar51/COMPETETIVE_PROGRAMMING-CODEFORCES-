#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;
    vector<int>arr(m);
    for(int i=0;i<m;i++){
        int ele=0;
        cin>>ele;
        arr[i]=ele;
    }
    sort(arr.begin(),arr.end());
    int mini=INT_MAX;
    int j=0;
    while(j<=m-n){
        int ele=arr[n+j-1]-arr[j];
        mini=min(mini,ele);
        j++;
    }
    cout<<mini<<" ";
   

    return 0;
}