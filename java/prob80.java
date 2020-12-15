import java.util.Scanner;

public class prob80 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		for(int i=1;i<=n;i++) 
		{
			for(int j=1;j<=i;j++)
				System.out.print("#");
			for(int j=i-1;j<2*n-i-1;j++)
				System.out.print(" ");
			for(int j=1;j<=i;j++)
				System.out.print("#");
			System.out.print("\n");
		}
		for(int i=1;i<n;i++) 
		{
			for(int j=n-i;j>0;j--)
				System.out.print("#");
			for(int j=2;j<=i*2+1;j++)
				System.out.print(" ");
			for(int j=n-i;j>0;j--)
				System.out.print("#");

			System.out.print("\n");
		}

	}

}
