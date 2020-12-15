import java.util.Scanner;

public class prob79 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		for(int i=1;i<=n;i++) 
		{
			for(int j=2;j<=i;j++)
				System.out.print(" ");
			for(int j=i-1;j<2*n-i;j++)
				System.out.print("#");
			System.out.print("\n");
		}
		for(int i=2;i<=n;i++)
		{
			for(int j=n-i;j>0;j--)
			{
				System.out.print(" ");
			}
			for(int j=1;j<2*i;j++) System.out.print("#");
			System.out.print("\n");
		}

	}

}
