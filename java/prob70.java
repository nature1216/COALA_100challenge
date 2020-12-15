import java.util.Scanner;

public class prob70 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String f = sc.next();
		int m = f.length()-1;
		boolean flag = true;
		for(int i=0;i<=f.length()/2;i++)
		{
//			System.out.print(f.charAt(m-i));
//			System.out.print(f.charAt(m+i));
			if(f.charAt(i) != f.charAt(m))
			{
				flag = false;
				break;
			}
			else m--;
			
		}
		if(flag) System.out.print("yes");
		else System.out.print("no");
	}

}
