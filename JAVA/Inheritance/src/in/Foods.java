package in;

class food{
	private String name;
	private int calories;
	
	public food(String name, int calories) {
		super();
		this.name = name;
		this.calories = calories;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getCalories() {
		return calories;
	}
	public void setCalories(int calories) {
		this.calories = calories;
	}
	
	public void display() {
		System.out.println("Food name : "+name);
		System.out.println("Calories contain : "+calories);
	}
	
}

class Fastfood extends food{
	private int fatContent;

	public Fastfood(String name, int calories,int fatContent) {
		super(name,calories);
		this.fatContent = fatContent;
	}

	public int getFatContent() {
		return fatContent;
	}

	public void setFatContent(int fatContent) {
		this.fatContent = fatContent;
	}
	
	public void display() {
		super.display();
		System.out.println("Fat contain in % : "+fatContent);
	}
	
}

class Burger extends Fastfood{
	private boolean cheesAdded;

	public Burger(String name, int calories, int fatContent, boolean cheesAdded) {
		super(name, calories, fatContent);
		this.cheesAdded = cheesAdded;
	}

	public boolean isCheesAdded() {
		return cheesAdded;
	}

	public void setCheesAdded(boolean cheesAdded) {
		this.cheesAdded = cheesAdded;
	}
	
	public void display() {
		super.display();
		System.out.println("Chees Added : "+cheesAdded);
	}
	
}
public class Foods {
   public static void  main(String args[]) {
	   Burger b=new Burger("Jumbo Chicken",700,30,true);
	   b.display();
   }
}
