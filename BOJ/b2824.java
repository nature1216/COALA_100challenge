package b2824;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    static long[] a, b;

    public static long gcd(long a, long b) {
        long r = a % b;
        while(r != 0) {
            a = b;
            b = r;
            r = a % b;
        }
        return b;
    }

    public static void main(String[] args) throws IOException {
        // TODO Auto-generated method stub
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        a = new long[n];

        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i=0;i<n;i++) {
            a[i] = Long.parseLong(st.nextToken());
        }

        int m = Integer.parseInt(br.readLine());
        b = new long[m];

        st = new StringTokenizer(br.readLine());
        for(int i=0;i<m;i++) {
            b[i] = Long.parseLong(st.nextToken());
        }

        long result = 1;
        boolean flag = false;

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                long g = gcd(a[i], b[j]);

                result *= g;
                a[i] /= g;
                b[j] /= g;

                if(result >= 1000000000L) flag = true;

                result %= 1000000000L;
            }
        }

        if(flag) {
            System.out.printf("%09d", result);
        } else {
            System.out.print(result);
        }


    }

}
