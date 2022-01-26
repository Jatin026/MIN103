#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of rows of the square matrix : ";
    cin>>n;
    int arr[n][n],trans_arr[n][n];
    float ele;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
        cin>>ele;
        arr[i][j]=ele;
        trans_arr[j][i]=ele;

        }
    }
    cout<<"The Original Matrix : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
        cout<<arr[i][j]<<" ";   
        }
        cout<<endl; 
    }
    cout<<"The Transposed Matrix : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
        cout<<trans_arr[i][j]<<" ";   
        }
        cout<<endl; 
    }
    
    return 0;
}