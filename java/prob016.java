import java.util.*;
public class prob016 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int candy = sc.nextInt();
		int people = sc.nextInt();
		
		System.out.print(candy/people+candy%people+" ");
		System.out.print(candy/people);

	}

}
