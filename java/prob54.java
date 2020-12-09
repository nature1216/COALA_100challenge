import java.util.Scanner;

//class Point {
//	int x,y;
//}

public class prob54 {
	
	

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		Point p[] = new Point[n];
//		for(int i=0;i<n;i++)
//			p[i] = new Point();
		for(int i=0;i<n;i++)
		{
			p[i].x = sc.nextInt();
			p[i].y = sc.nextInt();
		}
		int Xmax = 0;
		int Ymax = 0;
		for(int i=0;i<n;i++)
		{
			if(p[Xmax].x < p[i].x) Xmax = i;
			if(p[Xmax].x == p[i].x)
				if(p[Xmax].y < p[i].y)
					Xmax = i;
			
			if(p[Ymax].y < p[i].y) Ymax = i;
			if(p[Ymax].y == p[i].y)
				if(p[Ymax].x < p[i].x)
					Ymax = i;
		}
		System.out.print(p[Xmax].x+" ");
		System.out.println(p[Xmax].y);
		System.out.print(p[Ymax].x+" ");
		System.out.print(p[Ymax].y);
		
		
	}

}
