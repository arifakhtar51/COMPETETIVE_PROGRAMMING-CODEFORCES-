#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr[i]=ele;
    }
    int cnt=1;
    int ans=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            cnt++;
            ans=max(ans,cnt);
        }
        else{
            cnt=1;
        }
    }
    cout<<ans;
    return 0;
}