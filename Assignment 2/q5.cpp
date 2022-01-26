#include<iostream>
using namespace std;

int main(){
    int a1,a2,a3,a4,a5;
    cout<<"Enter the first number :";
    cin>>a1 ;
    cout<<"Enter the second number :";
    cin>>a2 ;
    cout<<"Enter the third number :";
    cin>>a3 ;
    cout<<"Enter the fourth number :";
    cin>>a4 ;
    cout<<"Enter the fifth number :";
    cin>>a5 ;
    int max1=(a1>a2)?(a1>a3?a1:a3):(a2>a3?a2:a3);//Use of Nested ternary operator(short form of If Else)
    int max2=(a4>a5)?(a4>a3?a4:a3):(a5>a3?a5:a3);
    int max=(max1>max2?max1:max2);
    cout<<"The maximum among these five number is :"<<max;
    return 0;
}