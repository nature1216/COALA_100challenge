import java.util.Scanner;

public class prob61 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String ip = sc.next();
		int first = Integer.valueOf(ip.substring(0,3));
		int second = Integer.valueOf(ip.substring(4,7));
		int third = Integer.valueOf(ip.substring(8,11));
		int fourth = Integer.valueOf(ip.substring(12,15));
//		System.out.println(first);
//		System.out.println(second);
//		System.out.println(third);
//		System.out.println(fourth);
		if(first == 123 && second == 123 && third == 123)
		{
			if(fourth <= 255 && fourth >=2 ) System.out.print("winable!");
			else System.out.print("gg");
		}
		else System.out.print("gg");
	}

}
