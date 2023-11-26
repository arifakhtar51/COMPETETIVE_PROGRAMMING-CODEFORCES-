#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(vector<ll>&a,ll n){
        int  l=0;
        int  r=0;
        int cnt=0;
      

        while(l<n){
            if(l==0|| (l>0 && a[l-1]>a[l])){
                r=l;
                while(r<n){
                    if(a[l]!=a[r]){
                        
                        break;
                    }
                    if(r==n-1 ||( r<n-1 && a[r]<a[r+1])){ 
                        cnt++;
                    }
                    r++;
                }
            }
        
            l++;
        }
        if(cnt==1){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
        return ;

    
}
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
       solve(v,n);
        
    }
     
   return 0;
}