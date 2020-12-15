import java.util.Scanner;

public class prob86 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double n = sc.nextInt();
		double m = sc.nextInt();
		double ans = 0;
		if(n<m)
		{
			ans = Math.floor(Math.sqrt(Math.pow(m, 2)-Math.pow(n, 2)));
		}
		else
			ans = Math.floor(Math.sqrt(Math.pow(n, 2)-Math.pow(m, 2)));
		System.out.print((int)ans);
	}

}
