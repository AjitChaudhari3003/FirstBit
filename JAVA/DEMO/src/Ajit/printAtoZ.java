package Ajit;

public class printAtoZ {
	public static  void printAto() {
		for(char i='A';i<='Z';i++) {
			System.out.println(i);
			try {
				Thread.sleep(500);
			}catch(Exception e) {
				e.getMessage();
			}
		}
	}
}
