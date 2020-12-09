import java.util.*;
public class prob52 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		String a[] = new String[n];
		for(int i=0;i<n;i++)
			a[i] = sc.next();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				System.out.print(a[j].charAt(i));
			}
			System.out.print("\n");
		}
			

	}

}
