abstract class Calculate {
	 abstract int cal(int a, int b);
}

class Add extends Calculate {
	@Override
	int cal(int a, int b) {	
		return a+b;
	}
}

class Sub extends Calculate {
	@Override
	int cal(int a, int b) {	
		return a-b;
	}
}

class Mul extends Calculate {
	@Override
	int cal(int a, int b) {	
		return a*b;
	}
}

public class prob42 {

	public static void main(String[] args) {
		System.out.println(new Add().cal(1, 2));
		System.out.println(new Sub().cal(5, 2));
		System.out.println(new Mul().cal(2, 3));

	}

}
