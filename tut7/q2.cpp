#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n,bool dec)
{
    int  idx;
    for (int i = 0; i < n-1; i++)
    {
        idx = i;
        for (int j = i+1; j < n; j++)
        if(dec){
        if (arr[j] < arr[idx])
            idx = j;
        }else{
           if (arr[j] > arr[idx])
            idx = j;
        }
        swap(arr[idx], arr[i]);
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
    selectionSort(arr,n,decide);
    print(arr,n);
    median(arr,n);
    return 0;
}