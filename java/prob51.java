import java.util.Scanner;
public class prob51 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		
		
		int n = sc.nextInt();
		String word[] = new String[n];
		for(int i=0;i<n;i++) word[i] = sc.next();
		for(int i=0;i<n;i++) {
			if(word[i].length()<=10) {
				System.out.println(word[i]);
			}
			else {
				int length = word[i].length();
				char first = word[i].charAt(0);
				String last = word[i].substring(length-1);
				System.out.print(first);
				System.out.print(length);
				System.out.println(last);
			}
		}
		
	}

}
