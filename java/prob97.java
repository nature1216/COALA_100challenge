import java.util.Scanner;

public class prob97 {
	static class lock {
		int x,y;
		lock(int x,int y) {
			this.x = x;
			this.y = y;
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String n = sc.next();
		lock[] l = new lock[4];
		for(int i=0;i<4;i++) {
			switch(n.charAt(i)) {
			case '0':
			{
				l[i] = new lock(1,0);
				break;
			}
			case '1':
			{
				l[i] = new lock(0,3);
				break;
			}
			case '2':
			{
				l[i] = new lock(1,3);
				break;
			}
			case '3':
			{
				l[i] = new lock(2,3);
				break;
			}
			case '4':
			{
				l[i] = new lock(0,2);
				break;
			}
			case '5':
			{
				l[i] = new lock(1,2);
				break;
			}
			case '6':
			{
				l[i] = new lock(2,2);
				break;
			}
			case '7':
			{
				l[i] = new lock(1,0);
				break;
			}
			case '8':
			{
				l[i] = new lock(1,1);
				break;
			}
			case '9':
			{
				l[i] = new lock(2,1);
				break;
			}
			}
		}
		int sum = 0;
		for(int i=0;i<3;i++)
		{
			int x = Math.abs(l[i].x-l[i+1].x);
			int y = Math.abs(l[i].y-l[i+1].y);
			sum += y+x;
		}
		System.out.print(sum+4);
		
		
	}

}
