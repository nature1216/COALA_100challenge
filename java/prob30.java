import java.util.*;

public class prob30 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int sum = 0;
		
		for(int i=0;i<7;i++)
		{
			int a = sc.nextInt();
			sum+=a;
			if(sum>=n) sum=n;
		}
		System.out.print(sum);

	}

}
