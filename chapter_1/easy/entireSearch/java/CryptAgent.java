import java.util.*;

public class CryptAgent {
	public long enc(int[] nums) {
		/*
		long result = 0;
		for(int i = 0; i < nums.length; i++) {
			int[] tmp = new int[nums.length];
			System.arraycopy(nums, 0, tmp, 0, nums.length);
			tmp[i]++;
			long sum = 1;
			for(int j = 0; j < tmp.length; j++) {
				sum *= tmp[j];
				result = Math.max(sum, result);
			}
		}
		*/
		/* Example 1
		*/
		long result = 1;
		Arrays.sort(nums);
		nums[0]++;
		for(int i = 0; i < nums.length; i++) {
			result *= nums[i];
		}
		return result;
	}

	public static void main(String[] args) {
		int[] nums = {1000,999,998,997,996,995};
		System.out.println(new CryptAgent().enc(nums));
	}
}
