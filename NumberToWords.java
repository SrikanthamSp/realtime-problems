package test;
import java.util.*;
public class NumberToWords 
{
    private static String[] ones={ "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    private static String[] tens={ "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    private static String[] thousands={ "", "thousand", "lakh", "crore" };
    public static String convert(long number)
    {
        if(number==0)
        {
            return "zero ";
        }
        String prefix="";
        if(number<0)
        {
            number= -number;
            prefix="minus ";
        }
        String x="";
        int place=0;
        do {
            int n=(int)(number%1000);
            if(n!=0)
            {
                String s="";
                if(n<20)
                {
                    s=ones[n];
                } 
                else if(n<100)
                {
                    s=tens[n/10]+(n%10!=0?" "+ones[n%10]:"");
                } 
                else 
                {
                    s=ones[n/100]+" hundred"+(n%100!=0?" and "+convert(n%100):"");
                }
                x=s+" "+thousands[place]+" "+x;
            }
            place++;
            number/=1000;
        } while(number>0);
        return prefix+x.trim()+" ";
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a number: ");
        long number=sc.nextLong();
        System.out.println(convert(number));
    }
}
