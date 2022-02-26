#include <bits/stdc++.h>

using namespace std;
float determinantOfMatrix(int a[3][3]){
	
  float determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
 return determinant;
	
}
class matrix {

    private :

        int A[3][3];

    public :

        void getData()
            {

            cout<<"Please enter the elements of the matrix\n";

            for (int i = 0 ; i < 9 ; i++)

                {

                cin>>A[int(i/3)][i%3];

                }

            }

        void inputData(int B[3][3])
            {

            for (int i = 0 ; i < 9 ; i++)

                {

                A[int(i/3)][i%3] = B[int(i/3)][i%3];

                }

            }

        void getTranspose()
            {
                for (int i = 0; i < 3; i++)
                {
                   for (int j = 0; j <=i; j++)
                   {
                       swap(A[i][j],A[j][i]);
                   }
                   
                    
                } 
            }
        matrix operator + (int a[3][3]){
            matrix x;
            for (int i = 0 ; i < 3 ; i++)

                {

                    for (int j = 0; j < 3 ; j++)
                    {
                        x.A[i][j]=A[i][j]+a[i][j];
                    }
                }
                return x;
            }
        void showMatrix(){
            cout<<"......OUTPUT..........\n";
            for (int i = 0 ; i < 3 ; i++)
            {

                for (int j = 0; j < 3; j++)
                {
                    cout<<A[i][j]<<" ";
                }
                cout<<"\n";

            }   
        }  
        bool operator < (matrix obj ){
            return (determinantOfMatrix(A)<determinantOfMatrix(obj.A));
        }

};

int main()
{
    matrix A,B;
    A.getData();
    B.getData();
    A.getTranspose();
    A.showMatrix();
    cout<<(A<B);
}