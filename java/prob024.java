import java.util.*;
public class prob024 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a[] = new int[5];
		for(int i=0;i<5;i++) a[i] = sc.nextInt();
		if(n==0) System.out.print("[]");
		else System.out.print("[");
		for(int i=0;i<n;i++)
		{
			if(i==n-1) System.out.print(a[i]+"]");
			else System.out.print(a[i]+", ");
		}
		if(n==5) System.out.print("[]");
		else System.out.print("[");
		for(int i=n;i<5;i++)
		{
			if(i==4) System.out.print(a[i]+"]");
			else System.out.print(a[i]+", ");
		}

	}

}
