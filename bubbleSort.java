package trainingDay4;
import java.util.*;
public class BubbleSort//using recursion
{
		void bubbleSort(int arr[])
		{
			int n=arr.length;
			for (int i=0;i< n-1;i++)
				for (int j=0;j<n-i-1;j++)
					if (arr[j]>arr[j+1])
					{
						int temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
		}
		void printArray(int arr[])
		{
			int n=arr.length;
			for (int i=0;i<n;++i)
				System.out.print(arr[i]+" ");
			System.out.println();
		}
		public static void main(String args[])
		{
			BubbleSort ob = new BubbleSort();
			Scanner s=new Scanner(System.in);
			System.out.println("enter array size ");
			int n=s.nextInt();
			int arr[]=new int[n];
			System.out.println("enter array elements ");
			for(int i=0;i<n;i++)
			{
				arr[i]=s.nextInt();
			}
			System.out.println("Unsorted array = ");
			for(int i=0;i<n;i++)
			{
				System.out.print(arr[i]+" ");
			}
			ob.bubbleSort(arr);
			System.out.println("\n Sorted array");
			ob.printArray(arr);
		}
	}
