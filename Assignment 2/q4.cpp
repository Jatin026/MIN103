#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"The integer is : "<<i<<" The character corresponding to it is :"<<char(i)<<endl;
    }
    return 0;
}