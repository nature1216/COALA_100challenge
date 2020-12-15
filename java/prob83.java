import java.util.Scanner;

public class prob83 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				System.out.print(" ");
			for(int j=0;j<n;j++)
				System.out.print("#");
			for(int j=0;j<2*n-1;j++)
				System.out.print(" ");
			for(int j=0;j<n;j++)
				System.out.print("#");
			System.out.print("\n");
		}
		for(int j=0;j<n;j++)
		{
			for(int i=0;i<n*6-1;i++)
			System.out.print("#");
			System.out.print("\n");
		}
		
		for(int i=0;i<2*n-1;i++)
		{
			for(int j=0;j<n;j++)
				System.out.print(" ");
			for(int j=0;j<n;j++)
				System.out.print("#");
			for(int j=0;j<2*n-1;j++)
				System.out.print(" ");
			for(int j=0;j<n;j++)
				System.out.print("#");
			System.out.print("\n");
		}
		for(int j=0;j<n;j++)
		{
			for(int i=0;i<n*6-1;i++)
			System.out.print("#");
			System.out.print("\n");
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				System.out.print(" ");
			for(int j=0;j<n;j++)
				System.out.print("#");
			for(int j=0;j<2*n-1;j++)
				System.out.print(" ");
			for(int j=0;j<n;j++)
				System.out.print("#");
			System.out.print("\n");
		}
	}

}
