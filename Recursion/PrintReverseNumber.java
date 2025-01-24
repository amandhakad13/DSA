public class PrintReverseNumber {
		
	public void display(int n) {
		if(n == 1) {
			System.out.println(1);
			return;
		}
		System.out.println(n);
		display(n-1);
	}
	
	public static void main(String[] args){
		PrintReverseNumber p1 = new PrintReverseNumber();
		p1.display(10);
	}
}