import java.util.Scanner;

public class prob87 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int m = sc.nextInt();
		int milk = 0;
		
		while(true) {
			if(n<m) break;
			if(n>=m*2) {
				milk += 3;
				n -= 2*m;
				if (milk%5 == 0 || (milk-1)%5==0 || (milk-2)%5 ==0) milk++;
			}
			else {
				milk ++;
				n -= m;
				if (milk%5 == 0) milk++;
			}

		}
		System.out.print(milk);
	}

}
