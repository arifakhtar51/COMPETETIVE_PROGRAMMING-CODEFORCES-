#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
           
        }
        
        bool flag=0;
        ll i=0;
        while(i+1<n && v[i]<=v[i+1])i++;
          
          while(i+1<n && v[i]>=v[i+1])i++;
        if(i+1==n)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        


        
       


    }
    
    return 0;
}