import java.util.*;

public class Party {
	public int inv(String[] one, String[] two) {
		/* Example 0
		int ans = 0;
		for(int i = 0; i < one.length; i++) {
			int f = 0;
			int s = 0;
			for(int j = 0; j < one.length; j++) {
				if(one[i].equals(one[j])) f++;
				if(one[i].equals(two[j])) f++;
				if(two[i].equals(one[j])) s++;
				if(two[i].equals(two[j])) s++;
			}
			ans = Math.max(f, ans);
			ans = Math.max(s, ans);
		}
		*/
		///////////////////////////////////////////
		/* Example 1
		*/
		HashMap<String, Integer> map = new HashMap<String, Integer>();

		for(int i = 0; i < one.length; i++) {
			map.put(one[i], 0);
			map.put(two[i], 0);
		}
		for(int i = 0; i < one.length; i++) {
			map.put(one[i], map.get(one[i])+1);
			map.put(two[i], map.get(two[i])+1);
		}
		int ans = 0;
		
		for(String key: map.keySet()) {
			ans = Math.max(ans, map.get(key));
		}
		
		return ans;
	}

	public static void main(String[] args) {
		String[] one = {"fishing", "gardening", "swimming", "fishing"};
		String[] two = {"hunting", "fishing", "fishing", "biting"};

		int result = new Party().inv(one, two);

		System.out.println(result);
	}
}
