import java.util.*;

public class prob49 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int cost = sc.nextInt();
		int fh = cost/500;
		int h = (cost%500)/100;
		int ft = ((cost%500)%100)/50;
		int t = (((cost%500)%100)%50)/10;
		
		System.out.print(fh+h+ft+t);

	}

}
