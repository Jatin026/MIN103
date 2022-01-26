#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b, int i){
    if(a%i==0 && b%i==0) return i;
    return gcd(a,b,i-1);
}
int main(){
    int a,b;
    cin>>a>>b;
    int i=min(a,b);
    cout<<gcd(a,b,i);
    return 0;
}