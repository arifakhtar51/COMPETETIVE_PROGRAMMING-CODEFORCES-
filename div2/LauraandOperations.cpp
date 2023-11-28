#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
     while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        ll x,y,z;
        // Calculate the maximum possible number of operations
       if (abs(b-c) % 2 ==0 ){x=1;}
       else x=0;

 if(abs(a-c) % 2 ==0) {y=1; }
 else y=0;
  if(abs(a-b) % 2 ==0) {z=1; }
 else z=0;

cout<<x<<" "<<y<<" "<<z<<endl;
    }
    return 0;

}
