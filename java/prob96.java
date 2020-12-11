import java.util.Scanner;

public class prob96 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		String hey = "hey";
		for(int i=0;i<n;i++) hey = hey+"!";
		System.out.print(hey);
	}

}
