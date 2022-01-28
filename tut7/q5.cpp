#include<bits/stdc++.h>
using namespace std;
double interpolate(double x[], double y[], double xp , const int n){
    double yp=0,count=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            yp+=((y[j]-y[i])/(x[j]-x[i]))*(xp-x[i])+y[i];
            count++;
        }
        
    }
    return (yp/count);
}
int main(){
    int n;
    cin>>n;
    double x[n],y[n],xp;
    cin>>xp;
    for (int i = 0; i < n; i++)
    {
        cin>>x[i]>>y[i];
    }
    cout<<"The Interpolated value of y is : "<<interpolate(x,y,xp,n);
    return 0;
}