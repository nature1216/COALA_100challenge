import java.util.Scanner;

public class prob66 {
	
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int d = sc.nextInt();
		if(a+b<d)
		{
			if(a+b>c || b+c>d) System.out.print("triangle");
			else System.out.print("nope");
		}
		else if(a+b<c)
		{
			if(a+b>d || b+c>d) System.out.print("triangle");
			else System.out.print("nope");
		}
		else
		{
			if(a+b>c || a+b>d) System.out.print("triangle");
			else System.out.print("nope");
		}
	}

}
