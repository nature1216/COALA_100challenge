import java.util.*;
public class prob027 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int year = sc.nextInt();
		int pres = year-2017;
		int mp = year-2020;
		if(pres%5==0 && mp%4 == 0) System.out.print("President MP");
		else if(pres%5 != 0 && mp%4 == 0) System.out.print("MP");
		else if(pres%5 ==0 && mp%4 != 0) System.out.print("President");
		else if(year==2020) System.out.print("MP");
		else System.out.print("nothing");

	}

}
