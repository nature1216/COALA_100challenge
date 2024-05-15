import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      
      int t = Integer.parseInt(br.readLine());
      int[] dp = new int[44];
      dp[0] = 0;
      dp[1] = 1;
      
      for(int i=0;i<t;i++) {
        int n = Integer.parseInt(br.readLine());
        if(n == 0) {
          System.out.println("1 0");
        } else {
            for(int j=2;j<=n;j++) {
              dp[j] = dp[j-1] + dp[j-2];
            }
            
            System.out.println(dp[n-1] + " " + dp[n]);
        }
        
        
      }
    
  }
}
