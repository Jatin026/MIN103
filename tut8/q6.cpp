#include<bits/stdc++.h>
using namespace std;
double sumFactn(int n, double *f){
    double sum=0;
    for (int i = 0; i <= n; i++)
    {
        sum+=*(f+i);     
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    double f[n+1];
    f[0]=1;
    for (int i = 1; i <=n; i++)
    {
        f[i]=i*f[i-1];
    }
    cout<<sumFactn(n,f);
    return 0;
}