#include<iostream>
using namespace std;

int main(){
    int n,cap=1;
    cout<<"Enter the no. of row : ";
    cin>>n;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < i; j++)
        {
           cout<<cap<<" ";
           cap++;
        }
        cout<<endl;
    }
    return 0;
}