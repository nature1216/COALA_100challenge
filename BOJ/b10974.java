package b10974;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    static boolean visited[];
    static int nums[];
    static int n;
    static void func(int count) {
        if(count == n+1) {
            for(int i=1;i<nums.length;i++) {
                System.out.print(nums[i] + " ");
            }
            System.out.println();
        }

        for(int i = 1;i<=n;i++) {
            if(visited[i]) continue;

            visited[i] = true;
            nums[count] = i;
            func(count + 1);
            visited[i] = false;
        }
    }

    static public void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        n = Integer.parseInt(br.readLine());
        visited = new boolean[n+1];
        nums = new int[n+1];
        func(1);
    }
}
