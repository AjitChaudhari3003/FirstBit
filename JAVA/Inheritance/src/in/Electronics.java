package in;

class Electronic {
	String brand;
	int batteryCapacity;
	
	public Electronic(String brand, int batteryCapacity) {
		super();
		this.brand = brand;
		this.batteryCapacity = batteryCapacity;
	}
	
	public void display() {
		System.out.println("Brand :"+brand);
		System.out.println("Battery Capacity in mAh :"+batteryCapacity);
	}
}

class Smartphone extends Electronic{
	int Screensize;

	public Smartphone(String brand, int batteryCapacity, int screensize) {
		super(brand, batteryCapacity);
		Screensize = screensize;
	}
	
	public void display() {
		super.display();
		System.out.println("Screen size in inches :"+Screensize);
	}
}

public class Electronics {
   public static void main(String args[]) {
	   Smartphone s = new Smartphone("Samsung",5000,9);
	   s.display();
   }
}
