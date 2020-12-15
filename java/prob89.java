import java.util.Scanner;

public class prob89 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		int gcd = 0;
		int lcm = 1;
		
		for(int i=1;i<=((a<b)?b:a);i++)
		{
			if(a%i ==0 && b%i == 0)
			{
				if(i>gcd) gcd = i;
			}
		}
		lcm *= gcd * a/gcd * b/gcd;
		if(lcm==1) 
		{
			System.out.println(gcd);
			System.out.print(a*b);
		}
		else
		{
			System.out.println(gcd);
			System.out.print(lcm);
		}

	}

}
