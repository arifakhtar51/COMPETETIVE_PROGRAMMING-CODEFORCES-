#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){

    ll t;
    cin>>t;
    
    while (t--)
    {
        string str;
        cin>>str;
        ll n=str.size();
        ll i=1;
        stack<char>st;
        st.push(str[0]);
        while (i<n)
        {
            if(st.empty()){
                st.push(str[i]);
                i++;
                continue;
            }
            auto tp=st.top();
            char ch=str[i];
            if((tp=='A' && ch=='B')|| (tp=='B' && ch=='B')){
                st.pop();
            }
            else{
                st.push(str[i]);
            }
            i++;
            
        }
        cout<<st.size()<<endl;
        
        
    }
    
   
    return 0;
}