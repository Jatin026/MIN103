#include<bits/stdc++.h>
using namespace std;
void transpose(double **arr , const int n){
    cout<<"......OUTPUT.....\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<*(*(arr+j)+i)<<" ";
        }
        cout<<'\n';
    }
}
int main(){
    int n;
    cin>>n;
    double ** arr = new double *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new double [n]; 
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>*(*(arr+i)+j);
        }
        
    }
    transpose(arr,n);
    return 0;
}