// C++ program to find adjoint and inverse of a matrix
#include<bits/stdc++.h>
using namespace std;
#define N 4
void getCofactor(float A[N][N], float temp[N][N], int p, int q, int n)
{
	int i = 0, j = 0;

	// Looping for each element of the matrix
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			if (row != p && col != q)
			{
				temp[i][j++] = A[row][col];
				if (j == n - 1)
				{
					j = 0;
					i++;
				}
			}
		}
	}
}

int determinant(float A[N][N], int n)
{
	int D = 0;  
	if (n == 1)
		return A[0][0];

	float temp[N][N];  

	int sign = 1;  
	for (int f = 0; f < n; f++)
	{
		 
		getCofactor(A, temp, 0, f, n);
		D += sign * A[0][f] * determinant(temp, n - 1);

		sign = -sign;
	}

	return D;
}

 
void adjoint(float A[N][N],float adj[N][N])
{
	if (N == 1)
	{
		adj[0][0] = 1;
		return;
	}

	// temp is used to store cofactors of A[][]
	float sign = 1, temp[N][N];

	for (int i=0; i<N; i++)
	{
		for (int j=0; j<N; j++)
		{
			// Get cofactor of A[i][j]
			getCofactor(A, temp, i, j, N);

			// sign of adj[j][i] positive if sum of row
			// and column indexes is even.
			sign = ((i+j)%2==0)? 1: -1;

			// Interchanging rows and columns to get the
			// transpose of the cofactor matrix
			adj[j][i] = (sign)*(determinant(temp, N-1));
		}
	}
}

// Function to calculate and store inverse, returns false if
// matrix is singular
bool inverse(float A[N][N], float inverse[N][N])
{
	// Find determinant of A[][]
	float det = determinant(A, N);
	if (det == 0)
	{
		cout << "Singular matrix, can't find its inverse";
		return false;
	}

	// Find adjoint
	float adj[N][N];
	adjoint(A, adj);

	// Find Inverse using formula "inverse(A) = adj(A)/det(A)"
	for (int i=0; i<N; i++)
		for (int j=0; j<N; j++)
			inverse[i][j] = adj[i][j]/float(det);

	return true;
}

void display(float A[N][N])
{
	for (int i=0; i<N; i++)
	{
		for (int j=0; j<N; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
}

// Driver program
int main()
{
	float A[N][N] = { {5, -2, 2, 7},
					{1, 0, 0, 3},
					{-3, 1, 5, 0},
					{3, -1, -9, 4}};

	float adj[N][N]; // To store adjoint of A[][]

	float inv[N][N]; // To store inverse of A[][]

	cout << "Input matrix is :\n";
	display(A);

	cout << "\nThe Adjoint is :\n";
	adjoint(A, adj);
	display(adj);

	cout << "\nThe Inverse is :\n";
	if (inverse(A, inv))
		display(inv);

	return 0;
}
