#include <algorithm>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int getMaxNumber(vector<int> arr)
{
	int max = arr[0];
	for(int i = 1; i < arr.size(); i++)
	{
		if(max < arr[i]) max = arr[i];
	}
	return max;
}

void counting(vector<string> s)
{
	map<string, int> m;
	for(int i = 0; i < s.size(); i++)
	{
		m[s[i]];
	}

	map<string, int>::iterator it = m.begin();
	while(it != m.end())
	{
		cout << (*it).first << " " << (*it).second << endl;
		++it;
	}
}

int main()
{
	// 배열
	vector<int> v;
	v.push_back(2);
	v.push_back(8);
	v.push_back(1);
	v.push_back(5);

	int maxNumber = getMaxNumber(v);

	cout << "Max : " << maxNumber << endl;

	//sort()
	/*
	sort(v.begin(), v.end());
	cout << "sorted vector  >>" << endl;
	for(int i = 0; i < v.size(); i++)
	{
		cout << v.[0] << endl;
	}
	*/

	// 문자열 처리
	string s = "abcd";
	if(s == "abcd") cout << "string is equal" << endl;
	char c = s[1]; cout << "s[1] : " << c << endl;
	s = "before" + s + "after"; cout << s << endl;
	s = s.substr(6, 4); cout << "sliced : " << s << endl;

	//counting string
	vector<string> v2;
	v2.push_back(s);
	counting(v2);
}
