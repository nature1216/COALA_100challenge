import java.util.Scanner;

public class prob67 {
	
	static int a;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		if(n==0) System.out.print("0");
		a=n;
		bin(n);

	}
	static void bin(int d) {
		if(d<=0) return;
		int t = d%2;
		bin(d/2);
		System.out.print(t);
	}

}
