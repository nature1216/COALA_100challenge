import java.util.Scanner;

public class prob56 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String a = sc.next();
		int day = sc.nextInt();
		int m[] = new int[6];
		for(int i=0;i<6;i++)
			m[i] = Integer.valueOf(a.charAt(i)-48);
	//	for(int i=0;i<6;i++) System.out.print(m[i]+" ");
		for(int i=0;i<day;i++)
		{
			int t=m[0];
			m[0]=m[3];
			m[3]=m[5];
			m[5]=m[4];
			m[4]=m[1];
			m[1]=m[2];
			m[2]=t;
		}
		for(int i=0;i<6;i++) System.out.print(m[i]);

	}

}
