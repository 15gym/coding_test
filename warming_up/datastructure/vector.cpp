#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	vector<string> v;

	v.reserve(5);

	v.push_back("You ");
	v.push_back("know ");
	v.push_back("what ");
	v.push_back("i'm ");
	v.push_back("saying ");


	copy(v.begin(), v.end(),
		 ostream_iterator<string>(cout, " "));
	cout << endl;

	cout << "max = " << v.max_size() << endl;
	cout << "size = " << v.size() << endl;
	cout << "capacity = " << v.capacity() << endl;

	swap(v[1], v[3]);

	v.insert(find(v.begin(),v.end(),"saying ")," now");
	v.back() = "?";

	copy(v.begin(), v.end(),
		 ostream_iterator<string>(cout, " "));
	cout << endl;

	cout << "max = " << v.max_size() << endl;
	cout << "size = " << v.size() << endl;
	cout << "capacity = " << v.capacity() << endl;

	return 0;
}
