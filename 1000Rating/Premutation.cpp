
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){


    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        ll arr[n][n-1];
        
        for(ll i=0;i<n;i++){
            for( ll j=0;j<n-1;j++){
                
                cin>>arr[i][j];
            }
        }
       
        
        ll a1,a2;
        a1=arr[0][0];
        for(ll i=0;i<n;i++){
            if(arr[i][0]!=a1){
                a2=arr[i][0];
                break;
            }
        }
        ll c1=0,c2=0;
        for(ll i=0;i<n;i++){
            if(arr[i][0]==a1)c1++;
            else c2++;
        }

        ll maxi=(c1>c2?a1:a2);
        ll nextmaxi=a1+a2-maxi;
        vector<ll>ans;
        ans.push_back(maxi);
        for(ll i=1;i<n-1;i++){
            for(ll j=0;j<n;j++){
                if(arr[j][i]!=nextmaxi){
                    ans.push_back(nextmaxi);
                    nextmaxi=arr[j][i];
                    break;
                }
            }
        }
        ans.push_back(nextmaxi);
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;

        

    }

}


