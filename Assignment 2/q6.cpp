#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x,y,z;
    cout<<"Enter the x coordinate :";
    cin>>x ;
    cout<<"Enter the y coordinate :";
    cin>>y ;
    cout<<"Enter the z coordinate :";
    cin>>z ;
    float theta,phi,r;
    float modulus;
    modulus=pow((x*x+y*y),0.5);
    r=pow(x*x+y*y+z*z,0.5);
    theta=atan(y/x);
    phi=atan(modulus/z);
    cout<<"The value of theta is :"<<theta<<endl;
    cout<<"The value of phi is :"<<phi<<endl;
    cout<<"The Distance from origin is :"<<r<<endl;

    return 0;
}