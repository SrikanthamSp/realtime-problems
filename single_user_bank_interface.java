package Session_3;
import java.io.IOException;
import java. util.*;
public class Bank_det {
	public static void main(String[] args)throws IOException {
		String usr = "rohith";
		String pass = "abcd";
		Scanner so = new Scanner(System.in);
		System.out.println("Enetr your username");
		String usr1=so.next();
		System.out.println("Enetr your password");
		String pass1=so.next();
		if(usr1.equals(usr) && pass1.equals(pass))
		{
			System.out.println("login successful");
			int ch;
			int balance=0;
			while(true)
			{   
				System.out.println("Enter your choice");
				System.out.println("1. Deposit");
				System.out.println("2. withdraw");
				System.out.println("3. balance check");
				System.out.println("4. pin change");
				System.out.println("5.log out");
				ch=so.nextInt();
			   switch(ch)
			  {
			case 1: System.out.println("Enter the amount to be deposited");
			        int depo=so.nextInt();
			        balance=balance+depo;
			        System.out.println("Deposited successfully");
			        break;
			case 2: System.out.println("Enter the amount to be withdrawn");
	                int wid=so.nextInt();
	                if(balance>wid)
	                {
	                balance=balance-wid;
	                System.out.println("withdraw successful");
	                }
	                else
	                	System.out.println("insufficient balance");
	                break;
			case 3:System.out.println("Current balance ="+ balance);
	        		break;

			case 4:System.out.println("Enter current pin");
			       String pass5=so.next();
			       if(pass5.equals(pass))
			       {
			       System.out.println("Enter new pin");
			       String pass2=so.next();
			       System.out.println("Renter new pin");
			       String pass3=so.next();
			       if(pass2==pass3)
			    	   pass=pass2;
			       System.out.println("password changed successfully");
			       }
			       else{
			    	   System.out.println("invalid password");
			    	   System.out.println("system logging out");
			    	   System.exit(0);
			       }
	        		break;
			case 5: System.out.println("logout successful");
					System.exit(0);
								}
			}
		}
		else
		{
			System.out.println("login failed");
		}
		so.close();
		
	}

	}
