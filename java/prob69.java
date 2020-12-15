import java.util.Scanner;

public class prob69 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		String m = sc.next();
		boolean flag = true;
		int rm = 0;
		int base=1;
		if(m.matches(".*[a-z].*"))
			base=10;
		for(int i=base;i<=36;i++)
		{
			rm = 0;
			for(int j=0;j<m.length();j++)
			{
				char s = m.charAt(j);
			//	System.out.println(s);
				if(Character.isDigit(s))
				{
					int c = Character.getNumericValue(s);
					rm += c * Math.pow(i, m.length()-j-1);
//					System.out.println(m.length()-j);
				}
				else
				{
					int c = (int)s-87;
					rm +=c * Math.pow(i, m.length()-j-1);
				}
				
				
			}
			if(n == rm) {
				System.out.print(i);
				break;
			}
			
		}


	}

}