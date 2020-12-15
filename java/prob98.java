import java.util.Scanner;

public class prob98 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String start = sc.next();
		String pass = sc.next();
		String[] s = start.split(":");
		String[] p = pass.split(":");
		
		int hour = Integer.valueOf(s[0]);
		int min = Integer.valueOf(s[1]);
		int sec = Integer.valueOf(s[2]);
		
		int ph = Integer.valueOf(p[0]);
		int pm = Integer.valueOf(p[1]);
		int ps = Integer.valueOf(p[2]);
		
		int fh = 0;
		int fm = 0;
		int fs = 0;
		
		if(sec+ps >= 60) 
		{
			fm += (sec+ps)/60;
			fs=(sec+ps)%60;
		}
		else fs = sec+ps;
		if(fm+min+pm>=60)
		{
			fh += (fm+min+pm)/60;
			fm = (fm+min+pm)%60;
		}
		else fm = fm+min+pm;
		if(fh+hour+ph>=24)
		{
			fh = (fh+hour+ph)%24;
		}
		else fh = fh+hour+ph;
		
		System.out.printf("%02d:%02d:%02d", fh, fm, fs);

	}

}
