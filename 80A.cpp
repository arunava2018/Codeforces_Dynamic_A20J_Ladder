#include<iostream>
using namespace std;

bool isPrime(int a){
    for(int i=2;i*i<=a;++i){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int isNextPrime(int n,int m)
{
    // Edge cases
    int prime = n;
    bool found = false;
 
    // Loop till isPrime returns true
    while (!found) 
    {
        prime++;
        if (isPrime(prime))
        {
            found = true;
        }
    }
 
    return prime == m;
}
int main(){
    int n,m;
    cin>>n>>m;
    isNextPrime(n,m)?cout<<"YES":cout<<"NO";
    cout<<endl;

return 0;
}