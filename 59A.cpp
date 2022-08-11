#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int uper=0,lower=0;
    for(int i=0;i<s.length();i++){
        if(s[i]<97){
            uper++;
        }
        else{
            lower++;
        }
    }
    if(uper>lower){
    for(int i=0;i<s.length();i++){
        if(s[i]>=97)
        s[i]=s[i]-32;
      }
    }
    else{
     for(int i=0;i<s.length();i++){
     if(s[i]<97){
        s[i]=s[i]+32;
      }
    }
    }
    cout<<s;

return 0;
}