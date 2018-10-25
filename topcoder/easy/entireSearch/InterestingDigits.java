import java.util.*;

public class InterestingDigits {
	public int[] digits(int base) {
		List<Integer> list = new ArrayList<Integer>();
		base--;
		for(int i = 2; i <= base; i++) {
			if(base % i == 0) list.add(i);
		}
		int[] result = new int[list.size()];
		for(int i = 0; i < list.size(); i++) {
			result[i] = list.get(i);
		}
		return result;
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int base = s.nextInt();
		int[] result = new InterestingDigits().digits(base);
		for(int i = 0; i < result.length; i++) 
			System.out.print(result[i] + " ");
	}
}
