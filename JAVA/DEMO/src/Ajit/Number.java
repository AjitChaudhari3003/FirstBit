package Ajit;

public class Number {
	public static void print1to10() {
		for(int i=1;i<=10;i++) {
			System.out.println(i);
			try {
				Thread.sleep(700);
			}catch(Exception e) {
				e.getMessage();
			}
		}
	}
}
