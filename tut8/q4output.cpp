#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int * arr = new int [3];
    for (int i = 0; i < n; i++)
    {
        cin>>*(arr+i);
    }
    cout<<"......OUTPUT.....\n";
    for (int i = 0; i < n; i++)
    {
        cout<<*(arr+i)<<"  ";
    }
    
    return 0;
}