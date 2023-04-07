// C++ program to find the number of islands using DFS

#include <bits/stdc++.h>

using namespace std;

//checks whether the given index is out of the array. Out of array is considered as 0.
bool isSafe(int N,int M,int i,int j)
{
	if(i < 0 || i >= N)
		return false;
	if(j < 0 || j >= M)
		return false;
	return true;
}

//this function does the DFS for every new one 1 found and assign every connected one to zero.
void delIsland(int **A,int N,int M,int i,int j)
{
	if(isSafe(N,M,i,j) && A[i][j] == 1)
		{
			A[i][j] = 0;
			delIsland(A, N , M , i-1, j-1);
			delIsland(A, N, M, i-1, j);
			delIsland(A, N, M, i-1, j+1);
			delIsland(A, N, M, i, j-1);
			delIsland(A, N, M, i, j+1);
			delIsland(A, N, M, i+1, j-1);
			delIsland(A, N, M, i+1, j);
			delIsland(A, N, M, i+1, j+1);
		}
}

//this function finds the total number of islands and return count – 1 as total number of bridges
int TotalBridge(int **A, int N, int M)
{
	int count = 0 ;
	for(int i=0;i<N;i++)
		{
			for(int j=0;j<M;j++)
				if(A[i][j] == 1)
					{
						count++;
						delIsland(A,N,M,i,j);
					}
		}
	if(count == 0)
		return 0;
	return count;
}

//get the input and calls the function
int main()
{
	int N,M;
	cout << “nEnter the order of the islands : “;
	cin >> N >> M;
	int **A = (int **)malloc(N * sizeof(int *));
	for (int i = 0; i < N; i++)
		A[i] = (int *)malloc(M * sizeof(int));
	cout << “nEnter the island matrix : n”;
	for(int i = 0; i < N ; i++)
		for(int j = 0; j < M; j++)
			cin >> A[i][j];
	cout << “Total Number of islands : ” << TotalBridge(A,N,M)<<endl;
	return 0;
}
/* The program starts by defining a function called isSafe that takes the dimensions of the matrix, N and M, and the row and column index i and j respectively. The function checks whether the index is within the bounds of the matrix or not. If the index is out of bounds, then the function returns false, otherwise it returns true.

Next, the program defines another function called delIsland that takes the input matrix A, the dimensions of the matrix N and M, and the row and column index i and j respectively. This function is used to delete an entire island. If the index is safe and the element at the index is equal to 1, then the element at that index is set to 0 and the delIsland function is called recursively on all adjacent cells to the current cell.

After that, the program defines the TotalBridge function that takes the input matrix A, the dimensions of the matrix N and M. This function counts the total number of islands in the matrix. It starts by initializing the count variable to 0. Then, it loops through all the cells of the matrix. If a cell contains a 1, it increments the count variable and calls the delIsland function to delete that island. Finally, it returns the total number of islands.

The main function of the program takes the input for the dimensions of the matrix and the matrix itself. It then calls the TotalBridge function and prints the output. */
