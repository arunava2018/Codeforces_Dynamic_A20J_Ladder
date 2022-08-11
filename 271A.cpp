#include<iostream>
using namespace std;
int main(){
    int y,a,b,c,d,ans;
    cin>>y;
    while(1){
        y++;
        ans=y;
        a=y%10;
        y=y/10;
        b=y%10;
        y=y/10;
        c=y%10;
        y=y/10;
        d=y%10;
        y=y/10;
        if(a!=b&&b!=c&&c!=d&&a!=c&&a!=d&&b!=d){
            cout<<ans<<endl;
            break;
        }
        y=ans;
    }

return 0;
}