
public class Juicy {
	public int[] pour(int[] capacities, int[] bottles,
					  int[] from, int[] to) {
		for(int i = 0; i < from.length; i++) {
			int sum = bottles[to[i]] + bottles[from[i]];
			bottles[to[i]] = Math.min(sum, capacities[to[i]]);
			bottles[from[i]] = sum - bottles[to[i]];
		}
		return bottles;
	}

	public static void main(String[] args) {
		int[] capacities = {700000,800000,900000,1000000};
		int[] bottles = {478478,478478,478478,478478};
		int[] from = {2,3,2,0,1};
		int[] to = {0,1,1,3,2};
		int[] result = new Juicy().pour(capacities,bottles,from,to);

		for(int i = 0; i < result.length; i++) 
			System.out.println(result[i] + " ");
	}
}
