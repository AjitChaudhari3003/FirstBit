package in;

class Student {
	String name;
	int rollNo;
	public Student(String name, int rollNo) {
		this.name = name;
		this.rollNo = rollNo;
	}
	
	public void display() {
		System.out.println("Name :"+name);
		System.out.println("Roll Number :"+rollNo);		
	}
}

class Undergraduate extends Student{
	int sem;

	public Undergraduate(String name, int rollNo, int sem) {
		super(name, rollNo);
		this.sem = sem;
	}
	
	public void display() {
		super.display();
		System.out.println("Sem :"+sem);
	}
}


public class Students {
	public static void main(String args[]) {
		
		Undergraduate U = new Undergraduate("Ajit",8,7);
		U.display();
	}
}
