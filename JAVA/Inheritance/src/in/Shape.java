package in;

public class Shape {
   private String color;

public Shape(String color) {
	super();
	this.color = color;
}

public String getColor() {
	return color;
}

public void setColor(String color) {
	this.color = color;
}
   
   public void display() {
	   System.out.println("Color is :"+color);
   }
   
   public double area() {
	return 0;
}
}
