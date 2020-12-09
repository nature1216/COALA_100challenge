import java.util.Scanner;

class Point {
	int x,y;
}

public class prob58 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Point p1 = new Point();
		Point p2 = new Point();
		
		p1.x = sc.nextInt();
		p1.y = sc.nextInt();
		p2.x = sc.nextInt();
		p2.y = sc.nextInt();
		
		System.out.print(Math.abs(p1.x-p2.x) + Math.abs(p1.y-p2.y));

	}

}
