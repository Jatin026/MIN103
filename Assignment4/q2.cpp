#include<iostream>
using namespace std;
int main(){
    int c,n=0,counter=0,counter1=0,counter2=0,counter3=0,counter4=0,counter5=0 ;
    long double number;
    cout<<"Enter the ntramo. of time you want to roll the dice : ";
    cin>>number;
    while (n++<number)
    {
        c=rand()%6+1;
        if(c==6){
            counter++;
        }
        else if(c==5){
            counter5++;
        }
    
        else if(c==4){
            counter4++;
        }
    
        else if(c==3){
            counter3++;
        }
    
        else if(c==2){
            counter2++;
        }
        else {
            counter1++;
        }
    }
    cout<<"The frequency of 1 :"<<counter1<<endl;
    cout<<"The frequency of 2 :"<<counter2<<endl;
    cout<<"The frequency of 3 :"<<counter3<<endl;
    cout<<"The frequency of 4 :"<<counter4<<endl;
    cout<<"The frequency of 5 :"<<counter5<<endl;
    cout<<"The frequency of 6 :"<<counter<<endl;
    cout<<"The Probability of 1 : "<<(counter1)/number<<endl;
    cout<<"The Probability of 2 : "<<(counter2)/number<<endl;
    cout<<"The Probability of 3 : "<<(counter3)/number<<endl;
    cout<<"The Probability of 4 : "<<(counter4)/number<<endl;
    cout<<"The Probability of 5 : "<<(counter5)/number<<endl;
    cout<<"The Probability of 6 : "<<(counter)/number<<endl;
    cout<<"Expected Probability : "<<(1)/6.0;
    return 0;
}