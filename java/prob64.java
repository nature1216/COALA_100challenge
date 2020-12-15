import java.util.Scanner;

public class prob64 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		String a = "|";
		System.out.println(a);
		for(int i=1;i<=n;i++)
		{
			a += "=";
			System.out.println(a);
		}
		System.out.print(a+"|");
	}

}
