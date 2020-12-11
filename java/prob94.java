import java.util.Scanner;

public class prob94 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long n = sc.nextLong();
		long m = sc.nextLong();
		double k = sc.nextDouble();
		k = k/100;
	//	System.out.println(k);
		int year = 0;
		long cost = 0;
		while(true)
		{
			cost +=n;
			if(cost>=m)
			{
				System.out.print(year);
				break;
			}
			else
			{
//				System.out.println(cost);
//				System.out.println(k);
//				System.out.println(cost*k);
				cost += cost*k;
				year++;
			}
		//	System.out.println("year"+year+" "+cost);
		}

	}

}
