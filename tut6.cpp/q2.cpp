#include<bits/stdc++.h>
using namespace std;
int sumDiff(int a , int b , bool decide){
    if(decide) return a+b;
    else return a-b;
}
int main(){
    int a, b;
    bool decide;
    cin>>a>>b>>decide;
    cout<<sumDiff(a,b,decide);
    return 0;
}