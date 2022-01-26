#include<iostream>
using namespace std;
int fact(int n){
    if(n<=1) return 1;
    return(n*fact(n-1));
}
bool factorion(int n){
    long long int sum=0;
    int temp=n;
    while(temp>0){
        sum+=fact(temp%10);
        temp=temp/10;
    }
    if(sum==n) return 1;
    else return 0;
}
int main(){
    int n; 
    cin>>n;
    if(factorion(n)==1) cout<<"Factorion";
    else cout<<"Not Factorion";
    return 0;
}