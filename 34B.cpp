// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum=0;
    for(int i=0;i<m;i++){
        if(arr[i]>=0){
            break;
        }
        sum+=arr[i];
    }
    cout<<-sum<<endl;
    // Write C++ code here
    return 0;
}