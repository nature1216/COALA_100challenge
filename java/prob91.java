import java.util.Scanner;

public class prob91 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String rsp = sc.next();
		for(int i=0;i<rsp.length();i++)
		{
			char s = rsp.charAt(i);
			switch(s)
			{
			case 'R':
			{
				System.out.print("P");
				break;
			}
			case 'P':
			{
				System.out.print("S");
				break;
			}
			case 'S':
			{
				System.out.print("R");
				break;
			}
			}
		}
	}
}
