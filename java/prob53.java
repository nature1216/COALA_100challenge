import java.util.Scanner;

public class prob53 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		String a[] = new String[n];
		int maxLength = 0;
		for(int i=0;i<n;i++)
			a[i] = sc.next();
		
		for(int i=0;i<n;i++) 
		{
			if(maxLength<a[i].length())
				maxLength = a[i].length();
				
		}
		for(int i=0;i<n;i++)
		{
			int length = a[i].length();
			for(int j=0;j<maxLength-length;j++) {
				a[i] = a[i].concat(".");
				}
				
		}
		for(int i=0;i<maxLength;i++)
		{
			for(int j=0;j<n;j++)
			{
				System.out.print(a[j].charAt(i));
			}
			System.out.print("\n");
		}

	}

}
