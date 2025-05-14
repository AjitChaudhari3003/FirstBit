package in;


class vechicle{
	String brand;
	int speed;
	public vechicle(String brand, int speed) {
	
		this.brand = brand;
		this.speed = speed;
	}
	
	public void display() {
		 System.out.println("Brand: " + brand);
		 System.out.println("Speed: " + speed);
	}
	
}

class car extends vechicle{
	int doors;

	public car(String brand, int speed, int doors) {
		super(brand, speed);
		this.doors = doors;
	}
	public void display() {
		 super.display();
		 System.out.println("Doors: " + doors);
	}
}
class bus extends vechicle{
	int capacity;

	public bus(String brand, int speed, int capacity) {
		super(brand, speed);
		this.capacity = capacity;
	}
	public void display() {
		 super.display();
		 System.out.println("Capacity: " + capacity);
	}
}
public class vechi {
   public static void main(String args[]) {
	   car c1 = new car("TATA",150,4);
	   bus b1 = new bus("Volvo",100,40);
	   
	   c1.display();
	   b1.display();
   }
}
