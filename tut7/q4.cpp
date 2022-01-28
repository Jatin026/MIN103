#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of rows of the square matrix : ";
    cin>>n;
    int arr1[n][n],arr2[n][n],trans_arr[n][n];
    float ele;
    cout<<"For the 1st  Matrix : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
        cin>>ele;
        arr1[i][j]=ele;
        }
    }
    cout<<"For the 2nd  Matrix : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<n ;j++)
        {
        cin>>ele;
        arr2[i][j]=ele;
        trans_arr[j][i]=ele;

        }
    }
    cout<<"1st  Matrix : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
        cout<<arr1[i][j]<<"   ";   
        }
        cout<<endl; 
    }
    cout<<"2nd  Matrix : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
        cout<<arr2[i][j]<<"   ";   
        }
        cout<<endl; 
    }
    cout<<"The Resultant Matrix : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            int ele=0;
            for(int k=0;k<n;k++){
               ele+=arr1[i][k]*trans_arr[j][k];
            }

            cout<<ele<<"   ";   
        }
        cout<<endl; 
    }
    return 0;
}