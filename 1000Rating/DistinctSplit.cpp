#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n;
        string str;
        cin>>n>>str;
        
        ll i=0;
        unordered_map<char,ll>mp;
        while(i<n){
            
            mp[str[i]]++;
            i++;
        }
        ll ans=0;
        unordered_map<char,bool>Leftmp;
       for(int i=0;i<n;i++){
            mp[str[i]]--;
            Leftmp[str[i]];
            ll temp=0;
            for(auto j:mp){
                if(j.second>=1){
                    temp++;
                }
            }
            ll abc=temp+Leftmp.size();
            ans=max(ans,abc);
       }
       
        cout<<ans<<endl;
        
    }
     
   
}