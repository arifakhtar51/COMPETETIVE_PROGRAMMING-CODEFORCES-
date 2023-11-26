#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){

ll t;
cin>>t;
double n,k;
while(t--){
    
    cin>>n>>k;
    ll ans=ceil(n/k);
    k=k*ans;
    ll res=ceil(k/n);
    cout<<res<<endl;
    // if(b==1){
        
    //         cout<<1<<endl;
    //         continue;
        
    // }
    // else if(a<=b){
    //     ll ans=1;
    //     while(a*ans<b){
    //         ans++;
    //     }
    //     cout<<ans<<endl;
    // }
    // else{
    //    ll ans=1;
    //     while(b*ans<a){
    //         ans++;
    //     }
    //     cout<<ans<<endl;
    // }
}
   
   
}