import java.util.Scanner;

public class prob100 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int m = sc.nextInt();
		boolean locker[] = new boolean[101];
		for(int i=1;i<=100;i++) locker[i] = false;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=100;j++)
			{
				int a = i*j;
				if(a>100) break;
				else
				{
					if(locker[a]) locker[a] = false;
					else locker[a] = true;
				}
			}
		}
		if(locker[m]) System.out.print("open");
		else System.out.print("close");

	}

}
