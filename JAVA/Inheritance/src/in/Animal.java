package in;

class Animali{
	String color;
	
	public Animali(String color) {
		this.color=color;
	}
	
	public void display() {
		System.out.println("Color :"+color);
	}
}

class Dog extends Animali{
	String breed;
	public Dog(String color, String breed) {
		super(color);
		this.breed = breed;
	}
 
	public void display() {
		super.display();
		System.out.println("Breed :"+breed);
	}
	
	
}

class Puppy extends Dog{
	int age;
	public Puppy(String color, String breed, int age) {
		super(color,breed);
		this.age=age;
	}
 
	public void display() {
		super.display();
		System.out.println("Age in Days :"+age);
	}
	
	
}

public class Animal {
   public static void main(String args[]) {
	   Dog D =new Dog("Black","PitBull");
	   Puppy P=new Puppy("White","German Shephards",15);
	   D.display();
	   P.display();
   }
}
