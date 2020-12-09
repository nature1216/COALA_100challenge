import java.util.*;

public class prob014 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		
		int hour = a*3600;
		int min = b*60;
		
		System.out.print(hour + min + c);

	}

}
