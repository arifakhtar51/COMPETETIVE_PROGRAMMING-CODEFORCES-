#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){

ll t;
cin>>t;
double n,k;
while(t--){
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    ll mn=INT_MAX;
    if(x==0 && y==0){
        cout<<0<<endl;
        continue;
    }
    ll diff=abs(x-y);
    // cout<<"dif->"<<diff<<endl;
    mn=min(diff*a,diff*b);
   
    ll ans=mn;
    
    ll ele=min(x,y);
    //  cout<<"ele->"<<ele<<endl;
    ans+=(min(2*ele*a,ele*b));
    cout<<ans<<endl;
}
   
}