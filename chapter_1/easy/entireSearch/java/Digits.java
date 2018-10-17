import java.util.*;

public class Digits {
	public int[] digits(int base) {
		List<Integer> list = new ArrayList<Integer>();
		int num = base - 1;
		for(int i = 2; i <= num; i++) {
			if(num % i == 0) list.add(i);
		}
		int[] result = new int[list.size()];
		for(int i = 0; i < result.length; i++)
			result[i] = list.get(i);
		return result;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int input = 0;
		do {
			input = sc.nextInt();
		} while(input == 0 || input ==1);
		int[] arr = new Digits().digits(input);
		for(int i = 0; i < arr.length; i++) 
			System.out.println(arr[i] + " ");
	}
}
