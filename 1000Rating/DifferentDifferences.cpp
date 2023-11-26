#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(ll k,ll n){
          
    if(k==n){
        vector<ll>arr;
        for(int i=1;i<=k;i++){
            arr.push_back(i);
        }
          for(auto i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
    return ;
    }
    vector<ll>arr;
    ll cnt=0;
    for(ll i=1;i<=n && cnt<k;i+=cnt){
        
        if(k-cnt>=n-i+1){
            int it=cnt;
            for(ll j=i;it<=k-cnt+2;j++,it++){
                arr.push_back(j);
            }
            for(int m=0;m<k;m++){
                cout<<arr[m]<<" ";
            }
            cout<<endl;
            return ;
        }
        arr.push_back(i);
        cnt++;

    }
     for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
   

}
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>k>>n;
       solve(k,n);
        
    }
     
   return 0;
}