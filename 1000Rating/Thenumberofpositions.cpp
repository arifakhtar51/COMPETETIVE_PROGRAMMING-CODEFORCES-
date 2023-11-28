#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b,diff1,diff2;
    cin>>n>>a>>b;
    
    
    // cout<<diff1<<" "<<diff2;
    int ans=0;
    int i=a;
    while(i<=n){
        if(i>a && n-i<=b){
              cout<<n-i+1;
              return 0;
        }
        i++;
    }

    cout<<-1;
   
    return 0;
}