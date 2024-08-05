package b2493;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.StringTokenizer;

public class Main {
	static ArrayList<Integer> towers = new ArrayList<>();
	static Deque<Integer> dq = new ArrayDeque<>();
	static int[] result;
	
	static public void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int n = Integer.parseInt(br.readLine());
		
		result = new int[n];
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		for(int i=0;i<n;i++) {
			towers.add(Integer.parseInt(st.nextToken()));
		}
		
		for(int i=n-1;i>=0;i--) {
//			System.out.println(i);
			if(!dq.isEmpty()) {
//				System.out.println("dq.peek: " + towers.get(dq.peek()) + ", now: " + towers.get(i));				
			}
			if(!dq.isEmpty() && towers.get(dq.peek()) < towers.get(i)) {
				while(!dq.isEmpty() && towers.get(dq.peek()) < towers.get(i)) {
					result[dq.peek()] = i+1;
//					System.out.println("update: result[" + dq.peek() + "] = " + towers.get(i));
					dq.pop();
				}
			}
			dq.push(i);
		}
		
		for(int i : result) {
			System.out.print(i + " ");
		}
		
	}
}
