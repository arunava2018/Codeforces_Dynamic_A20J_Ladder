#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int capacity=0;
    int present=0;
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        present-=a;
        present+=b;
        capacity=max(capacity,present);
    }
    cout<<capacity;

return 0;
}