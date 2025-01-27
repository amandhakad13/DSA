public class Factorial {
	
	int factorialNumber(int n) {
		if(n==0||n==1)
			return 1;
		
		return n*factorialNumber(n-1);
	}
	public static void main(String[] args){
		int n = -5;
		
		if(n<0) {
			System.out.println("Factorial number is not possible");
		}
		else {
			Factorial f1 = new Factorial();
			System.out.println(f1.factorialNumber(n));
		}
	}
}