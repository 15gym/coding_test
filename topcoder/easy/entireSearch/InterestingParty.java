import java.util.*;

public class InterestingParty {
	public int bestInvitation(String[] first, String[] second) {
		Map<String, Integer> map = new HashMap<String, Integer>();
		for(int i = 0; i < first.length; i++) {
			map.put(first[i], 0);
			map.put(second[i], 0);
		}

		for(int i = 0; i < first.length; i++) {
			map.put(first[i], map.get(first[i]) + 1);
			map.put(second[i], map.get(second[i]) + 1);
		} 

		
		int max = 0;
		for(String key: map.keySet()) {
			max = Math.max(max, map.get(key)); 
		}

		return max;
	}

	public static void main(String[] args) {
		String[] first = {"t","o","p","c","o","d","e","r","s","i",
						  "n","g","l","e","r","o","u","n","d","m",
						  "a","t","c","h","f","o","u","r","n","i"};
		String[] second = {"n","e","f","o","u","r","j","a","n","u",
						  "a","r","y","t","w","e","n","t","y","t",
						  "w","o","s","a","t","u","r","d","a","y"};
		System.out.println(new InterestingParty().bestInvitation(first, second));
	}
}
