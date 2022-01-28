#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n,bool dec) 
{ 
    for (int i = 0; i < n-1; i++)     
      
    for (int j = 0; j < n-i-1; j++) 
        if(dec){
            if (arr[j] > arr[j+1]) 
            swap(arr[j], arr[j+1]);
        }
        else{
            if (arr[j] < arr[j+1]) 
            swap(arr[j], arr[j+1]);
        }
         
}
void median(int arr[], int n){
    cout<<"The median is : "<<endl;
    if(n%2==0){
        cout<<(arr[n/2]+arr[(n/2)-1])/2.0;
    }
    else{
        cout<<arr[n/2];
    }
}
void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    bool decide;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>decide;
    bubbleSort(arr,n,decide);
    print(arr,n);
    median(arr,n);
    return 0;
}