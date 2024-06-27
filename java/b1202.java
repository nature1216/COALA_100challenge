import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

class Pair implements Comparable<Pair> {
    int m;
    int v;

    public Pair(int m, int v) {
        this.m = m;
        this.v = v;
    }

    public int first() {
        return m;
    }

    public int second() {
        return v;
    }


    @Override
    public int compareTo(Pair o) {
        return Integer.compare(first(), o.first());
    }
}

public class Main {
    static ArrayList<Pair> jewels = new ArrayList<>();
    static ArrayList<Integer> weights = new ArrayList<>();
    static boolean[] visited;
    static Comparator<Pair> comparator = new Comparator<Pair>() {
        @Override
        public int compare(Pair o1, Pair o2) {
            return Integer.compare(o2.second(), o1.second());
        }
    };
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());

        visited = new boolean[k];

        for(int i=0;i<n;i++) {
            st = new StringTokenizer(br.readLine());

            int m = Integer.parseInt(st.nextToken());
            int v = Integer.parseInt(st.nextToken());

            jewels.add(new Pair(m, v));
        }

        for(int i=0;i<k;i++) {
            int c = Integer.parseInt(br.readLine());
            weights.add(c);
        }

        Collections.sort(weights);

        Collections.sort(jewels);

        long result = 0L;
        int index = 0;

        PriorityQueue<Pair> cand = new PriorityQueue<>(comparator);

        for(int i=0;i<k;i++) {
            int now = weights.get(i);

            for(int j=index;j<n;j++) {
                if(now >= jewels.get(j).first()) {
                    cand.add(jewels.get(j));
                    index ++;
                } else break;
            }

            if(!cand.isEmpty()) {
                int value = cand.poll().second();
                result += value;
            }
        }

        System.out.println(result);

    }
}
