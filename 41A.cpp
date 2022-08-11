#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    string rev = string(s.rbegin(), s.rend());
    if(s1==rev){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

return 0;
}