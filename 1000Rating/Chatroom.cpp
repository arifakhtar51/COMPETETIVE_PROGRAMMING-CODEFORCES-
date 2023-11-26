#include<bits/stdc++.h>
using namespace std;
int main(){

    string str;
    cin>>str;
   

    int n=str.size();
    int i=0;
    string ans="";
    bool flag=0;
    string s2="hello";
   int j=0;
   while(i<n && j<s2.size()){
    if(str[i]==s2[j]){
        j++;
        
    }
    
        i++;
    
   }
   (j==s2.size())?cout<<"YES":cout<<"NO";
   
}