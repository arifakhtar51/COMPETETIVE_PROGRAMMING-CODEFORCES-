#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
   

    for(ll i=0;i<n;i++){

        ll ele;
        cin>>ele;

        if(ele==0 || ele ==1){cout<<"NO"<<endl;continue;
        }
        if(!(ele&(ele-1))){
            cout<<"NO"<<endl;continue;
        }
        bool flag=1;
        for(int i=2;i<=(ele);i++){
            if(i&1){
                if(ele%i==0){
                    cout<<"YES"<<endl;
                    flag=0;
                    break;
                }
            }
        }
        if(flag)
       cout<<"NO"<<endl;
       
    }
    return 0;
}