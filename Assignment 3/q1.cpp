#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int even=0,odd=0;
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            odd+=int(s[i])-48;
        }
        else{
            even+=int(s[i])-48;
        }
    }
    cout<<even*odd;
    return 0;
}