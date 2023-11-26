#include<bits/stdc++.h>
using namespace std;
int main(){

    string str;
    cin>>str;
    unordered_map<char,bool>vowels;
    vowels['A']=1;
    vowels['O']=1;
    vowels['Y']=1;
    vowels['E']=1;
    vowels['U']=1;
    vowels['I']=1;
    vowels['a']=1;
    vowels['e']=1;
    vowels['i']=1;
    vowels['o']=1;
    vowels['u']=1;
    vowels['y']=1;

    int n=str.size();
    int i=0;
    string ans="";
    while(i<n){
        
        if(vowels[str[i]]){
            // do nothing
        }
        else{
            ans+=".";
            if(str[i]>='A' && str[i]<='Z'){
                ans+=(str[i]+32);
            }
            else
            ans+=str[i];
        }

        i++;
    }
   cout<<ans<<" ";
    return 0;
}