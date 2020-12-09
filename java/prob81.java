import java.util.Scanner;

public class prob81 {
	public static void main(String argv[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.println("#");
		if((n+2)%4 == 0) // 오른쪽 위에서 아래
		{
			
			for(int i=0;i<(n+2)/4;i++) {
				if(i%2 == 0) System.out.print("#");
				else System.out.print(".");
			}
			
		}
		else if((n+1)%4 == 0) // 아래 오른쪽에서 옆으로
		{
			for(int i=0;i<n;i++) System.out.print("#");
		}
	}
	
}
