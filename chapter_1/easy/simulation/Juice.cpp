#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

/*
class Juice {
public:
*/
	vector<int> pouring(vector<int> capacities, 
						vector<int> bottles, vector<int> fromId, 
						vector<int> toId) {
		/* solved
		for(int i = 0; i < fromId.size(); i++)
		{
			int add = bottles[fromId[i]];
			int sum = bottles[toId[i]];
			sum += add;
			add = 0;
			if(sum > capacities[toId[i]]) 
			{
				add = sum - capacities[toId[i]];
				sum = capacities[toId[i]];
			}
			bottles[fromId[i]] = add;
			bottles[toId[i]] = sum;
		}
		*/
		//////////////////////////////////////////////////////
		/* Answer 1
			//조건문이 필요 이상으로 많으면 그만큼 코드의 양이 많아지고
			//입력에 따라 처리되지 않는 부분이 발생함(버그찾기가 힘듬)
			// min()을 사용하여 조건문을 가능한 조금 사용하고,
			// 코드가 짧아지므로 실수도 줄일 수 있음.
		for(int i = 0; i < fromId.size(); i++)
		{
			int f = fromId[i];
			int t = toId[i];

			int vol = min(bottles[f], capacities[t] - bottles[t]);

			bottles[f] -= vol;
			bottles[t] += vol;
		}
		*/
		//////////////////////////////////////////////////////
		/* Answer 2
			//이동량을 무시하고 옮길 주스와 기존 주스 양의 총합이 일정하다는 것과
			//옮길 주스는 수즈 총량과 기존 주스 병의 용량 중에 작은 값이 된다는 것
		*/
		for(int i = 0; i < fromId.size(); i++)
		{
			int sum = bottles[fromId[i]] + bottles[toId[i]];
			bottles[toId[i]] = min(sum, capacities[toId[i]]);
			bottles[fromId[i]] = sum - bottles[toId[i]];
		}
		//////////////////////////////////////////////////////
		return bottles;
	}
//};

int main()
{
	vector<int> capacities;
	capacities.push_back(700000);
	capacities.push_back(800000);
	capacities.push_back(900000);
	capacities.push_back(1000000);
	vector<int> bottles;
	bottles.push_back(478478);
	bottles.push_back(478478);
	bottles.push_back(478478);
	bottles.push_back(478478);
	vector<int> fromId;
	fromId.push_back(2);
	fromId.push_back(3);
	fromId.push_back(2);
	fromId.push_back(0);
	fromId.push_back(1);
	vector<int> toId;
	toId.push_back(0);
	toId.push_back(1);
	toId.push_back(1);
	toId.push_back(3);
	toId.push_back(2);

	vector<int> result = pouring(capacities, bottles, fromId, toId);

	for(int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}
