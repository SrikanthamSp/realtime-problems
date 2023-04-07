/* C++ program to count the total number of ways to reach the Nth stair */

#include<stdio.h>
int fib(int n)
{
  if(n<=1)
     return n;
  return fib(n-1)+fib(n-2);
}  
int countWays(int s)
{
   return fib(s+1);
}
int main ()
{
 int steps;
 scanf(“%d”,&steps);
 printf(“%d”, countWays(steps));
 return 0;
}
/* The main logic behind the program is based on Fibonacci series where each number is the sum of the two preceding ones.

The program starts with a function named fib which takes an integer argument n and returns the nth Fibonacci number. If the value of n is less than or equal to 1, the function returns the value of n. Otherwise, it recursively calls itself by subtracting 1 from n and adding the value of the function with n-2.

The function countWays takes an integer argument s which is the number of steps to climb the stair. It calls the fib function by passing s+1 as an argument and returns the value of the returned Fibonacci number.

Finally, in the main function, the program prompts the user to enter the number of steps and reads it using scanf function. It then calls the countWays function by passing the entered number of steps as an argument and prints the returned value using printf function.

Overall, the program calculates the total number of ways to reach the Nth stair using the concept of Fibonacci series. */
