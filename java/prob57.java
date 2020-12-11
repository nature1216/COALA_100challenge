import java.util.Scanner;

public class prob57 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String p = sc.next();
		int n = sc.nextInt();
		int m = sc.nextInt();
		p=p.substring(1, p.length());
		p=p.substring(0, p.length()-1);
	//	System.out.print(p);
		for(int i=0;i<n;i++)
			p = p+"=";
		String left = "";
		for(int i=0;i<m;i++)
			left = left+"=";
		left = "@"+left+p+"@";
		System.out.print(left);

	}

}
