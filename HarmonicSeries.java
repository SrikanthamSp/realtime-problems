package trainingday5;
import java.util.*;
public class HarmonicSeries 
{
    public static void main(String[] args) 
    {
        float n;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the value of n");
        n=sc.nextFloat();
        double sum=0;
        for(int i=1;i<=n;i++) 
            sum+=1.0/i;
        System.out.println("sum: "+ sum);
    }
}
