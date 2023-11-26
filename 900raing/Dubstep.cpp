#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.size();
    int i=0;
    while(i<n){
        string temp=str.substr(i,3);
        if(temp=="WUB")i=i+3;
        else{
            auto f=str.find("WUB",i+1);
            string p=str.substr(i,f-i);
            cout<<p<<" ";
            i=i+p.size();
        }
    }
    return 0;
}