import java.util.Scanner;

public class prob99 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String gu = sc.next();
		int gcnt = 0;
		int ucnt = 0;
		for(int i=0;i<gu.length();i++)
		{
			if(gu.charAt(i)=='g') gcnt++;
			else if(gu.charAt(i)=='u') ucnt++;
		}
		if(gcnt<= ucnt) System.out.print(gcnt);
		else System.out.print(ucnt);
	}

}
