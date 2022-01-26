#include<iostream>
using namespace std;

int main(){
    int a ,b;
    cout<<"Enter the values of a and b : ";
    cin>>a>>b;
    cout<<"The values of a and b is : "<<a<<" and "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The swapped values of a and b is : "<<a<<" and "<<b<<endl;
    return 0;
}