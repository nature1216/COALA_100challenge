import java.util.Scanner;

public class prob69 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		String m = sc.next();
		double rm = 0;
		boolean flag = true;
		//System.out.println(rm);
		while(true) {
			int base = 1;
			for(int i=0;i<m.length();i++)
			{
				char s = m.charAt(i);
				//System.out.println(s);
				if(Character.isDigit(s))
				{
					int c = Character.getNumericValue(s);
					rm += c * Math.pow(base, m.length()-i-1);
					//System.out.println(Character.getNumericValue(s));
				}
				else
				{
					int c = (int)s-87;
					rm += c * Math.pow(base, m.length()-i-1);
					//System.out.print((int)s-87);
				}
			}
			if(n==rm) 
			{
				System.out.print(base);
				break;
			}
			base++;
		}

	}

}
