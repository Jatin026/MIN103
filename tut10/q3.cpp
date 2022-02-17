#include<iostream>
using namespace std;
class vector{
    int size;
    int *v=new int [size];
    public:
        vector(int vec_size){
            size=vec_size;
            for(int i=0; i< vec_size ;  i++){
                
                *(v+i)=0;
            }
        }
        vector(vector &v2){
            for (int i = 0; i < v2.size; i++)
            {
                *(v+i)=*(v2.v+i);
            }
        }
        void show(){
            for (int i = 0; i < size; i++)
            {
                cout<<*(v+i)<<" ";
            }
        }
        ~vector(){
            delete[] v;
        }
        void operator = (vector &v2){
           for (int i = 0; i < v2.size; i++)
            {
                *(v+i)=*(v2.v+i);
            } 
        }

};
int main(){
    vector vec(5);
    return 0;
}