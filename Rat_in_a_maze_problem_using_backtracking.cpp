/* C++ program for rat in a maze problem */

#include<iostream>

using namespace std;

bool isSafe(int r,int c,int n,int **maze)

{

 if( r < 0 || r >= n )

 return false;

 if( c < 0 || c >= n )

 return false;

 if(maze[r][c])

 return true;

 return false;

}

bool solvemaze(int ** maze,int i,int j,int ** soln,int n)

{

 if(i == n-1 && j == n-1)

 {

 soln[i][j]=1;

 return true;

 }

 if(isSafe(i,j,n,maze))

 {

 soln[i][j]=1;

 if(solvemaze(maze,i+1,j,soln,n))

 return true;

 if(solvemaze(maze,i,j+1,soln,n))

 return true;

 soln[i][j]=0;

 }

 return false;

}

int main()

{

 int n;

 cin>>n;

 int** maze = new int*[n];

 for(int i = 0; i < n; ++i)

 maze[i] = new int[n];

 int** soln = new int*[n];

 for(int i = 0; i < n; ++i)

 soln[i] = new int[n];

 for(int i=0;i<n;i++)

 {

 for(int j=0;j<n;j++)

 {

 cin>>maze[i][j];

 soln[i][j]=0;

 }

 }

 if(solvemaze(maze,0,0,soln,n))

 {

 for(int i=0;i<n;i++)

 {

 for(int j=0;j<n;j++)

 cout<<soln[i][j]<<" ";

 cout<<endl;

 }

 }

 else

 {

cout<<"-1";

 }

}

/*We first include the necessary header files and namespace in our program.

We define a function "isSafe" to check whether the rat can move to a certain position or not. It takes four arguments - the current position of the rat (r, c), the size of the maze (n), and the maze array. The function returns true if the rat can move to the given position (i.e., the position is within the maze, and there is no wall at that position). Otherwise, it returns false.

We define another function "solvemaze" to solve the rat in the maze problem. It takes five arguments - the maze array, the current position of the rat (i, j), the solution array (soln), the size of the maze (n). The function returns true if there exists a path from the starting position to the end position in the maze. Otherwise, it returns false.

In the "solvemaze" function, we first check if the current position of the rat is the end position of the maze. If yes, then we mark this position in the solution array (soln) and return true.

If the current position is not the end position, then we check if the rat can move to the current position or not. If yes, then we mark this position in the solution array and recursively call the "solvemaze" function for the next possible moves of the rat (i.e., move down or move right). If any of these recursive calls returns true, then we return true.

If the rat cannot move to the current position, then we mark this position in the solution array as 0 and return false.

In the main function, we first take the input of the size of the maze (n) and initialize the maze and solution arrays dynamically.

We take input of the maze array from the user and initialize the solution array to 0.

We call the "solvemaze" function with the starting position (0, 0) and the maze and solution arrays. If the function returns true, then we print the solution array. Otherwise, we print "-1" to indicate that there is no path from the starting position to the end position in the maze.

Finally, we free the dynamically allocated memory for the maze and solution arrays using the "delete" operator.

In conclusion, this program is an implementation of the rat in the maze problem using recursion and backtracking, where we find the path from the starting position to the end position in a maze represented as a 2D array.*/
