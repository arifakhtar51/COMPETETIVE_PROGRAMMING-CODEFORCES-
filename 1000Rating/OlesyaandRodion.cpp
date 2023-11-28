#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){


    ll n,t;
    cin>>n>>t;
    if(n==1&& t==10){
        cout<<-1;
        return 0;
    }

    string str="";
    if(t==10){
        while(n>1){
            str+=to_string(1);
            n--;
        }
        str+=to_string(0);
        cout<<str;
        return 0;
    }
    while(n--){
        str+=to_string(t);
    }
    cout<<str;
}