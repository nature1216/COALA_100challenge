import java.util.Scanner;

public class prob95 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String a = sc.next();
		String b = "0";
		int sum = 0;
		for(int i=0;i<a.length();i++)
		{
			if(Character.isDigit(a.charAt(i)))
			{
				b = b+a.charAt(i);
				if(a.length()-1==i)
				{
					sum+=Integer.valueOf(b);
				}
			}
			else
			{
				sum += Integer.valueOf(b);
				b = "0";
			}
		}
		System.out.print(sum);

	}

}
