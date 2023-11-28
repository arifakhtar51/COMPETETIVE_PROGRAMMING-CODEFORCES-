#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){


    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(b==1){
            cout<<"NO"<<endl;
            continue;
        }
        ll z=a*b*3;
        ll x=a;
        ll y=z-a;
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<" "<<z<<endl;


    }

}