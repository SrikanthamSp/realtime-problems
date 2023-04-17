package trainingday5;
import java.util.*;
public class Fibonacci_using_recursion {
		public static int fibonacciRecursion(int n){
		if(n == 0){
			return 0;
		}
		if(n == 1 || n == 2){
				return 1;
			}
		return fibonacciRecursion(n-2) + fibonacciRecursion(n-1);
		}
	    public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the value of n");
		int maxNumber=sc.nextInt();
		System.out.print("Fibonacci Series of "+maxNumber+" numbers: ");
		for(int i = 0; i < maxNumber; i++){
				System.out.print(fibonacciRecursion(i) +" ");
			}
		}
	}
