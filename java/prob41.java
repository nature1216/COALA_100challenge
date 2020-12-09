
public class prob41 {

	public static void main(String[] args) {
		Person p1 = new Student("female",22, 3.8);
		Person p2 = new Professor("Male",55,"010-1234-1234");

	}

}

class Person{
	String gender;
	int age;
	Person(String gender, int age) {
		this.gender = gender;
		this.age = age;
	}
}

class Student extends Person {
	double grade;

	Student(String gender, int age, double grade) {
		super(gender, age);
		this.grade = grade;
	}
}

class Professor extends Person {
	
	String ph; 
	
	Professor(String gender, int age, String ph) {
		super(gender, age);
		this.ph = ph;
	}
	
}