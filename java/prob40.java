
public class prob40 {
	
	static class Student {
	String name;
	int num;
	Student(String name, int num)
	{
		this.name = name;
		this.num = num;
	}
	@Override
	public String toString() {
		return name + " " + num;
	}
}

	public static void main(String[] args) {
		Student student = new Student("Kim",12345);
		System.out.print(student);

	}

}

