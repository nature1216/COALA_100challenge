import java.util.Scanner;

public class prob61 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String ip = sc.next();
		String game[] = ip.split("\\.");
		int add[] = new int[4];
		for(int i=0;i<game.length;i++)
		{
			add[i] = Integer.valueOf(game[i]);
		}
	//	for(int i=0;i<game.length;i++) System.out.println(game[i]);
		if(add[0] == 123 && add[1] == 123 && add[2] ==123)
		{
			if(add[3] <= 255 && add[3] >=2 ) System.out.print("winable!");
			else System.out.print("gg");
		}
		else System.out.print("gg");
	}

}
