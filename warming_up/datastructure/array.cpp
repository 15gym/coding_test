#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

int main()
{
	int arr[] = { 6, 8, 3, 5, 1, 4};
	transform (arr, arr+6,
			   arr,
			   arr,
			   multiplies<int>());
	sort(arr, arr+6);

	copy (arr, arr+6,
		  ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
