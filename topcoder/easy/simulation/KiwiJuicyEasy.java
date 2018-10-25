
public class KiwiJuicyEasy {
	public int[] thePouring(int[] capacities,
					int[] bottles, int[] fromId, int[] toId) {
		for(int i = 0; i < fromId.length; i++) {
			int sum = bottles[fromId[i]] + bottles[toId[i]];
			bottles[toId[i]] = Math.min(sum, capacities[toId[i]]);
			bottles[fromId[i]] = sum - bottles[toId[i]];
		}
		return bottles;
	}

	public static void main(String[] args) {
		int[] capacities = {700000, 800000, 900000, 1000000};
		int[] bottles = {478478, 478478, 478478, 478478};
		int[] fromId = {2, 3, 2, 0, 1};
		int[] toId = {0, 1, 1, 3, 2};
		int[] result = new KiwiJuicyEasy().thePouring(capacities, bottles, fromId, toId);
		for(int i = 0; i < result.length; i++)
			System.out.print(result[i] + "\t");
	}
}
