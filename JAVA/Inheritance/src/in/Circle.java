package in;

public class Circle extends Shape {
  int radius;

public Circle(String color, int radius) {
	super(color);
	this.radius = radius;
}
//
//public int getRadius() {
//	return radius;
//}
//
//public void setRadius(int radius) {
//	this.radius = radius;
//}
 
 public double area() {
	 return 3.14*radius*radius;
 }
 public void display() {
     super.display();
     System.out.println("Circle Area: " + area());
 }
}
