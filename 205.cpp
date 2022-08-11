#include<iostream>
using namespace std;
int main(){
int n,count=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int min=arr[0];
int minIndex=0;
for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
        minIndex=i;
    }
}
for(int i=0;i<n;i++){
    if(min==arr[i]){
        count++;
    }
}
if(count==1){
    cout<<minIndex+1<<endl;
}
else{
    cout<<"Still Rozdil"<<endl;
}
return 0;
}