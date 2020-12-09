import java.util.*;
import java.math.*;

public class prob013 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		long ab = (long)Math.pow(a, b);
		System.out.print(ab+a*b+a-b);

	}

}
