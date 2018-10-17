#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

/*
class Party {
public:
*/
	int best(vector<string> first, vector<string> second) {
		/* Answer 1
			//
		int i, j;
		int result = 0;

		for(i = 0; i < first.size(); i++) {
			int f = 0; 
			int s = 0;
			for(j = 0; j < first.size(); j++) {
				if(first[i] == first[j]) f++;
				if(first[i] == second[j]) f++;
				if(second[i] == first[j]) s++;
				if(second[i] == second[j]) s++;
			}
			result = max(f, result);
			result = max(s, result);
		}
		*/
		//////////////////////////////////////////////////////////////
		/* Answer 2
		*/
		map<string, int> m;
		for(int i = 0; i < first.size(); i++) {
			m[first[i]]	= 0;
			m[second[i]] = 0;
		}

		for(int i = 0; i < first.size(); i++) {
			m[first[i]]++;
			m[second[i]]++;
		}

		int result = 0;
		map<string, int>::iterator it;

		for(it = m.begin(); it != m.end(); it++) {
			result = max(result, it->second);
		}
		//////////////////////////////////////////////////////////////
		return result;
	}
//};
int main() {
	vector<string>	first;
	first.push_back("fishing");
	first.push_back("gardening");
	first.push_back("swimming");
	first.push_back("fishing");
	vector<string>	second;
	second.push_back("hunting");
	second.push_back("fishing");
	second.push_back("python");
	second.push_back("biting");

	cout << best(first, second) << endl;
	return 0;
}
