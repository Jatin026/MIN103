#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    METHOD 1
    auto arr = new int [3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>*(*(arr+i)+j);
        }
        
    }
    */
    // Method 2
    int ** arr = new int *[3];
    for (int i = 0; i < 3; i++)
    {
        arr[i] = new int [3]; 
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>*(*(arr+i)+j);
        }
        
    }
    cout<<"......OUTPUT.....\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<*(*(arr+i)+j)<<" ";
        }
        cout<<'\n';
    }
    return 0;
}