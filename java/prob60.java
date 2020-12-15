import java.util.Scanner;

public class prob60 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int m = sc.nextInt();
		int s = sc.nextInt();
		int dist=0;
		int c = 0;
		while(dist<s)
		{
			dist +=n;
			if(dist>=s) System.out.print(c);
			else dist -=m;
			c++;
		}
	}

}
