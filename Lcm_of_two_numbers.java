import java.util.*;
public class Main
{
public static void main(String args[])
{
int a,b,lcm,flag = 1;
System.out.print(“\nEnter two numbers : “);
Scanner sc = new Scanner(System.in);
a = sc.nextInt();
b = sc.nextInt();
lcm = (a > b) ? a : b;

while(flag == 1)
{
if( lcm % a == 0 && lcm % b == 0 )
{
System.out.println(“LCM of ” + a + ” and ” + b + ” is ” + lcm);
flag = 0;
break;
}
++lcm;
}
}
}

