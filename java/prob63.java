import java.util.Scanner;

public class prob63 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String g = sc.next();
		if(g.length()==2) System.out.print(g);
		else 
		{
			if(g.charAt(0)=='F') System.out.print("F");
			else System.out.print(g+"+");
		}
	}

}
