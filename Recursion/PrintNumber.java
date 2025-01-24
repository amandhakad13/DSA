public class PrintNumber {

	public void display(int n) {
		if(n == 0) {
			return;
		}
		System.out.println(11-n);
		display(n-1);
	}
	
	public static void main(String[] args) {
		PrintNumber p1 = new PrintNumber();
		p1.display(10);
	}
	
}