#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,sm=0,a=0,b=0,c=0;
    cin>>n;
    
    for(long i=0;i<n;i++){
        for(long j=0;j<3;j++){
            int ele;
            cin>>ele;
            if(j==0){
                a+=ele;
            }
            else if(j==1)b+=ele;
            else c+=ele;

        }
    }
    if(a==0&&b==0&&c==0)cout<<"YES";
    else cout<<"NO";
    return 0;
}