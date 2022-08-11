#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
float sum=0;
sum=accumulate(a, a+n,sum);
float fraction=sum/n;
cout<<fraction<<endl;
return 0;
}