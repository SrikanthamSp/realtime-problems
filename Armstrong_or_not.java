package trainingday5;
import java.util.*;
public class Armstrong {
	public static void main(String[] args)
{   Scanner sc=new Scanner(System.in);
	int n=0,temp,rem,res=0,number;
	System.out.println("enter a number ");
	number=sc.nextInt();
	temp=number;
	while(temp!=0)
	{
		temp/=10;
		++n;
	}
	temp= number;
	while(temp!=0)
	{
		rem=temp%10;
		res+=Math.pow(rem,n);
		temp/=10;
	}
	if(res==number)
	{
		System.out.println("Armstrong ");
	}
	else 
		System.out.println("not Armstrong ");
}
}
