import java.time.*;

interface Func1 {
	public int add(int a, int b);
}

interface Func2 {
	public int sub(int a, int b);
}

interface Func3 extends Func1, Func2 {
	public int mul(int a, int b);
}

class Calculation implements Func3
{

	@Override
	public int add(int a, int b) {
		return a+b;
	}

	@Override
	public int sub(int a, int b) {
		return a-b;
	}

	@Override
	public int mul(int a, int b) {
		return a*b;
	}
	
}

public class prob44 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
