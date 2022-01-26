#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a,b,c,d,e;
    cout<<"Enter the coefficient of x^2 : ";
    cin>>a ;
    cout<<"Enter the coefficient of x : ";
    cin>>b ;
    cout<<"Enter the  constant : ";
    cin>>c ;
    d=(-b)*(0.5);
    e=(b*b)/4-(a)*(c);
    if(e==0){
        cout<<"Equal Roots"<<endl;
        cout<<"The Root is : "<<(d);
        exit(0);
    }
    else if(e>0){
        cout<<"Real and Distinct Roots"<<endl;
    }
    else{
        cout<<"Imaginary Roots"<<endl;
        cout<<"The Roots are : "<<(d)<<" + "<<sqrt(-e)<<"i  and "<<d<<" - "<<sqrt(-e)<<"i";
        exit(0);
    }
    cout<<"The Roots are : "<<(d)+sqrt(e)<<" and "<<d-sqrt(e);
    return 0;
}