import java.util.*;

public class Cryptography {
	public long encrypt(int[] numbers) {
		Arrays.sort(numbers);
		numbers[0]++;
		long result = 1;
		for(int i = 0 ; i < numbers.length; i++) {
			result *= numbers[i];	
		}
		return result;
	}

	public static void main(String[] args) {
		int[] numbers0 = {1,2,3};
		System.out.println(new Cryptography().encrypt(numbers0));
		int[] numbers1 = {1,3,2,1,1,3};
		System.out.println(new Cryptography().encrypt(numbers1));
		int[] numbers2 = {1000,999,998,997,996,995};
		System.out.println(new Cryptography().encrypt(numbers2));
		int[] numbers3 = {1,1,1,1};
		System.out.println(new Cryptography().encrypt(numbers3));
	}
}
