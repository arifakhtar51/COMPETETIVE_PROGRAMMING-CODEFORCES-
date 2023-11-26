#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
   long long cnt=0;
   long longsquare=a*a;
    n=n-a;
    while(m>0){
        cnt++;
        m-=a;
    }
    long long cnt2=cnt;
   while(n>0){
    cnt2+=cnt;
    n-=a;
   }
    cout<<cnt2;
    return 0;
}