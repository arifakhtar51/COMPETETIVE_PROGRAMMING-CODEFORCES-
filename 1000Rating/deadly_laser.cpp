#include<bits/stdc++.h>
using namespace std;
int solve(int n,int m,int x,int y,int d){
    if((x+d>=n && y+d>=m)|| (x-d<=1 && y-d<=1)||(x-d<=1 && x+d>=n)||(y-d<=1 && y+d>=m)){
        return -1;

    }
    else{
        return n+m-2;
    }
}
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m,sx,sy,d;
        cin>>n>>m>>sx>>sy>>d;
        cout<<solve(n,m,sx,sy,d)<<endl;
    }
   
}