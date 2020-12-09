import java.util.*;
public class prob026 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String a  = sc.next();
		switch(a.charAt(0))
		{
		case('e'):
		{
			System.out.print("electric");
			break;
		}
		case('f'):
		{
			System.out.print("fire");
			break;
		}
		case('i'):
		{
			System.out.print("ice");
			break;
		}
		case('w'):
		{
			System.out.print("water");
			break;
		}
		default:
		{
			System.out.print("nothing");
			break;
		}
			
		}
		

	}

}
