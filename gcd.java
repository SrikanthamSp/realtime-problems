package trainingday5;
import java.util.*;
public class GCD {
public static void main(String[] args)
{
	Scanner sc=new Scanner(System.in);
	int gcd=1;
	System.out.println("enter two numbers ");
	int n1=sc.nextInt();
	int n2=sc.nextInt();
	for(int i=1;i<=n1 && i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd=i;
		}
	}
	System.out.println("GCD= "+gcd+" ");
}
}
