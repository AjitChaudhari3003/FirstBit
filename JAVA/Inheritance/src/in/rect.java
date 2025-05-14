package in;

public class rect extends Shape {
    double length, width;

    public rect(String color, double length, double width) {
        super(color);
        this.length = length;
        this.width = width;
    }

//    public double getLength() {
//        return length;
//    }
//
//    public void setLength(double length) {
//        this.length = length;
//    }
//
//    public double getWidth() {
//        return width;
//    }
//
//    public void setWidth(double width) {
//        this.width = width;
//    }
//
//  
    public double area() {
        return length * width;
    }

 
    public void display() {
        super.display();
        System.out.println("Rectangle Area: " + area());
    }
}
