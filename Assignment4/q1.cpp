#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c;
    cin>>n;
    if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<b;
    }
    else{
    while (n-->2)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c;
    }
    return 0;
}