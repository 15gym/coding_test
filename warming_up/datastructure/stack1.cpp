#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);

	cout << s.top() << ' ';
	s.pop();
	cout << s.top() << ' ';
	s.pop();

	s.top() = 9;

	s.push(4);
	s.push(5);
	s.pop();
	
	while(!s.empty())
	{
		cout << s.top() << ' ';
		s.pop();
	}
	cout << endl;

	return 0;
}
