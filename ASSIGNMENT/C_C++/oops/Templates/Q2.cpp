/*2. Write a program of to sort the array using templates */
#include <iostream>
using namespace std;
template <typename R> R myMax(R x, R y)
{
	return (x > y) ? x : y;
}

int main()
{
	cout << myMax<int>(3, 7) << endl;
	cout << myMax<double>(3.0, 7.0) << endl;
	cout << myMax<char>('g', 'e') << endl;

	return 0;
}
