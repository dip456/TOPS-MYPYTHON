/*Write a program of to swap the two values using template */
#include<iostream> 
using namespace std; 
template <class D> 
int swap_numbers(D& x, D& y) 
{ 
	D t; 
	t = x; 
	x = y; 
	y = t; 
	return 0; 
} 
    int main() 
{ 
	int a, b; 
	a = 10, b = 20; 

	swap_numbers(a, b); 
	cout << a << " " << b << endl; 
	return 0; 
}
