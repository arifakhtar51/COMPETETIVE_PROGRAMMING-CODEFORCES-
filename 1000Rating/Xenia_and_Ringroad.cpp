#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,i=0;
    cin>>n>>m;
    vector<long>arr(m);
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    long long  cnt=arr[0]-1;i++;
    while(i<m){
        if(arr[i]>=arr[i-1]){
            cnt+=arr[i]-arr[i-1];
        }
        else{
            cnt+=abs((arr[i]+n)-arr[i-1]);
        }
        i++;
    }
    cout<<cnt<<" ";
    return 0;
}