import java.util.Scanner;

public class prob59 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String a = sc.next();
		int count[] = new int[10];
		for(int i=0;i<10;i++) count[i] = 0;
		for(int i=0;i<a.length();i++)
		{
			switch(a.charAt(i))
			{
			case '0': {
				count[0]++;
				break;
			}
			case '1': {
				count[1]++;
				break;
			}
			case '2': {
				count[2]++;
				break;
			}
			case '3': {
				count[3]++;
				break;
			}
			case '4': {
				count[4]++;
				break;
			}
			case '5': {
				count[5]++;
				break;
			}
			case '6': {
				count[6]++;
				break;
			}
			case '7': {
				count[7]++;
				break;
			}
			case '8': {
				count[8]++;
				break;
			}
			case '9': {
				count[9]++;
				break;
			}
			}
		}
		
		for(int i=0;i<10;i++)
			System.out.print(count[i]+" ");

	}

}
