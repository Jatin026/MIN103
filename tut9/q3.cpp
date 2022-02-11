#include<bits/stdc++.h>
using namespace std;
struct Book{
    string author;
    int price,date[3]; //date->day, month, year
    void input(){
        cin>>author>>price;
        for (int i = 0; i < 3; i++)
        {
            cin>>date[i];
        }  
    }
    void display(){
        cout<<author<<"  "<<price<<"\n";
        for (int i = 0; i < 3; i++)
        {
            cout<<date[i];
            if(i!=2) cout<<"/";
        }
        cout<<"\n";
    }
};
void sort(Book b[]){
    for (int i = 0; i < 2; i++)
    {
        int min_index=i;
        for (int j = i+1; j<3; j++)
        {
            if(b[min_index].date[2]>b[j].date[2]) {
                min_index=j;
            }
            else if(b[min_index].date[2]==b[j].date[2]){
                if(b[min_index].date[1]>b[j].date[1]) {
                    min_index=j;
            }
                else if(b[min_index].date[1]==b[j].date[1]){
                    if(b[min_index].date[0]>b[j].date[0]) {
                        min_index=j;
            }
                }
            }
            else swap(b[min_index],b[i]);
        }   
    }
}
void show(Book b[]){
    for (int i = 0; i <20 ; i++)
    {
        b[i].display();
    }
}
int main(){
    Book b[20];
    for (int i = 0; i <20 ; i++)
    {
        b[i].input();
    }
    sort(b);
    cout<<"............20 Entries Exhausted.......\n";
    string s;
    cout<<"If you want to quit pls type quit\n";
    cin>>s;
    int i=0;
    while(s!="quit"){
        cout<<"Please enter your entry \n";
        b[19].input();
        sort(b);
    }
    show(b);
    return 0;
}