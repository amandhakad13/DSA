import java.util.Scanner;

public class Fibonacci {

	int fib(int n) {
		if(n <= 1) {
			return n;
		}
		return fib(n-1)+fib(n-2);
	}
	public static void main(String[] args) {
		Fibonacci f1 = new Fibonacci();
		
		int n = 6;
		
		int result = f1.fib(n);
		System.out.print(result);
	}
}