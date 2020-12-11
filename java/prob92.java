import java.util.Scanner;

public class prob92 {
	
	static class vector {
		int x;
		int y;
		int z;
		vector(int x, int y, int z)
		{
			this.x = x;
			this.y = y;
			this.z = z;
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		vector[] v = new vector[n];
		int Xsum = 0;
		int Ysum = 0;
		int Zsum = 0;
		for(int i=0;i<n;i++)
		{
			int x = sc.nextInt();
			int y = sc.nextInt();
			int z = sc.nextInt();
			v[i] = new vector(x,y,z);
		}
		
		for(int i=0;i<n;i++)
		{
			Xsum +=v[i].x;
			Ysum += v[i].y;
			Zsum += v[i].z;
		}
		if(Xsum == 0 && Ysum == 0 && Zsum == 0) System.out.print(0);
		else System.out.print("not 0");

	}

}
