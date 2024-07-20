package b2407;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.StringTokenizer;

public class Main {

    static BigInteger dp[][];

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        dp = new BigInteger[101][101];

        for(int i=1;i<=n;i++) {
            dp[i][0] = BigInteger.ONE;
            dp[i][i] = BigInteger.ONE;
        }

        dp[1][1] = BigInteger.ONE;

        for(int i=2;i<=n;i++) {
            for(int j=1;j<i;j++) {
                dp[i][j] = dp[i - 1][j - 1].add(dp[i-1][j]);
            }
        }

        System.out.print(dp[n][m]);

    }
}
