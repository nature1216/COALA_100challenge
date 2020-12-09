import java.util.*;

public class prob47 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int i = 0;
		int date = 0;
		
		while(true) {
			date = 3+i*7;
			if(date>n) break;
			i++;
		}
		System.out.print(i);

	}

}
