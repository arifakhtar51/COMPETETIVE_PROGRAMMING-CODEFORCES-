#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int sm=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sm+=arr[i];
    }
    sort(arr.begin(),arr.end());
    int Min_count=0;
    int j=n-1;
    int temp_sm=0;
    while(j>=0){
        sm-=arr[j];
        temp_sm+=arr[j];
         Min_count++;
        if(temp_sm>sm){
            break;
        }
       
        j--;
        
    }
    cout<<Min_count;
    
    
    return 0;
}