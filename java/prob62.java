import java.util.Scanner;

public class prob62 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		boolean pizza[] = new boolean[3];
		for(int i=0;i<3;i++) pizza[i] = true;
		String a[] = new String[2];
		for(int i=0;i<2;i++) a[i] = sc.nextLine();
		for(int i=0;i<2;i++)
		{
			switch(a[i])
			{
			case "bulgogi":
			{
				pizza[0] = false;
				break;
			}
			case "cheeze":
			{
				pizza[1] = false;
				break;
			}
			case "sweet potato":
			{
				pizza[2] = false;
				break;
			}
			}
		}
		if(pizza[0]) System.out.print("bulgogi");
		else if(pizza[1]) System.out.print("cheeze");
		else System.out.print("sweet potato");

	}

}
