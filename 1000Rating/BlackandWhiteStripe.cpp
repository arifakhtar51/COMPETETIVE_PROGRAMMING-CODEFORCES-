#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        if(k>n){
            cout<<-1<<endl;
            continue;
        }
        
        queue<char>q;
        ll cnt=0;
        for(int i=0;i<k;i++){
            q.push(str[i]);
            if(str[i]!='B')cnt++;
        }
        ll mn=cnt;
        for(ll i=k;i<n;i++){
            
            char ch=q.front();q.pop();
            if(ch!='B')cnt--;
            q.push(str[i]);
            if(str[i]!='B')cnt++;
            mn=min(mn,cnt);
        }
        cout<<mn<<endl;

    }
   
}