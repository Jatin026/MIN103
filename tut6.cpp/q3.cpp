#include<bits/stdc++.h>
using namespace std;
bool isEven (int n){
    if(n%2==1) return 0;
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isEven(n)==0){
        cout<<"Odd";
    }
    else cout<<"Even";
    return 0;
}