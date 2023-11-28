#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll solve(ll a){
    ll i=1;
    while(i<=a){
        i*=2;
    }
    return (a-(i/2));

}
int main(){

    ll x;
    cin>>x;
    ll temp=1;
    ll i=1;
    ll ans=0;
    while(x){
        x=solve(x);
        ans++;
    }
   

   
    cout<<ans;

       
   return 0;
}