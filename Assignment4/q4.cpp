#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int i=0;
    while(i<s.size()-i-1){
        if(s[i]!=s[s.size()-i-1]){
            cout<<"NOT Palindrome ";
            exit(0);
        }
        i++;
    }
    cout<<"Palindrome ";
    return 0;
}