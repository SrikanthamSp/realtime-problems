package test;
import java.util.Scanner;
public class CoinExchange 
{
    public static void main(String[] args)
    {
        int A[]={2000,500,200,100,50,20,10,5,2,1};
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the amount: ");
        int amount=sc.nextInt();
        int count[]=new int[A.length];
        for(int i=0;i<A.length;i++) 
        {
            if(amount>=A[i]) 
            {
                count[i]=amount/A[i];
                amount=amount%A[i];
            }
        }
        System.out.println("Coins/Notes required:");
        for(int i=0;i<A.length;i++)
        {
            if(count[i]>0) 
            {
                System.out.println(A[i]+" -- "+count[i]);
            }
        }
    }
}
