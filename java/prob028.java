import java.util.*;
public class prob028 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		
		if(a<b)
		{
			if(b<c)
				System.out.print("A");
			else if(a>c)
				System.out.print("C");
		}
		else if(a>b)
		{
			if(b>c)
				System.out.print("C");
			else if(a<c)
				System.out.print("B");
		}
		else if(b<c)
			if(c<a)
				System.out.print("B");
		else if(b>c)
			if(c<a)
				System.out.print("A");
		
	}

}
