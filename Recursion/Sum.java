public class Sum {
	
	int SumNaturalNumber(int n) {
		if(n==1||n==0)
			return 1;
		
		return n+SumNaturalNumber(n-1);
	}
	public static void main(String[] args){
		int n = 0;
		
		Sum s1 = new Sum();
		System.out.println(s1.SumNaturalNumber(n));
		
	}
}