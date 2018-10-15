#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

void print(const list<int>& li1, const list<int>& li2)
{
	cout << "list 1 : ";
	copy(li1.begin(), li1.end(), ostream_iterator<int>(cout, " "));
	cout << endl; 
	cout << "list 2 : ";
	copy(li2.begin(), li2.end(), ostream_iterator<int>(cout, " "));
	cout << endl; 
}

int main()
{
	list<int> li1, li2;

	for(int i = 1; i < 6; i++)
	{
		li1.push_back(i);
		li2.push_front(i);
	}

	print(li1, li2);


	li2.splice(find(li2.begin(),li2.end(),3), li1);
	print(li1, li2);
	cout << "(splice)" << endl;

	li2.sort();
	li1 = li2;
	li2.unique();
	print(li1, li2);
	cout << "(sort & unique)" << endl;
	return 0;
}
