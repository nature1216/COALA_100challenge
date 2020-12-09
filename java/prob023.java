import java.util.*;
public class prob023 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int problem_array[] = new int[6];
		
		for(int i=0;i<6;i++)
		{
			int a = sc.nextInt();
			problem_array[i] = a;
		}
		for(int i=0;i<6;i++) System.out.print(problem_array[i]+" ");
		System.out.print("\n");
		for(int i=0;i<3;i++)
		{
			int tmp = problem_array[i];
			problem_array[i] = problem_array[5-i];
			problem_array[5-i] = tmp;
		}
		for(int i=0;i<6;i++) System.out.print(problem_array[i]+" ");
	}

}
