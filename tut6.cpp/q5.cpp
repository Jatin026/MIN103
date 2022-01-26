#include<bits/stdc++.h>
using namespace std;
int Square_Cube(int n, string s){
    for (int i = 0; i < s.size(); i++)
    {
        s[i]=tolower(s[i]);
    }
    if(s=="square") return (pow(n,2)+1e-5);// To remove the error due to typecasting
    return pow(n,3)+1e-5;
}
int main(){
    int n;
    string s;
    cin>>n>>s;
    cout<<Square_Cube(n,s);
    return 0;
}