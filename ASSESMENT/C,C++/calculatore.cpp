#include <iostream>
#include <math.h>
using namespace std;

class Calculator
{
float a, b;
public:


	void result() 
	{
		cout << "Enter First Number: "; 
		cin >> a;
		cout << "Enter Second Number: "; 
		cin >> b;
	}

	float add() 
	{
		return a + b;
	}

	float sub() 
	{
		return a - b;
	}

	float mul() 
	{
		return a * b;
	}

	float div() 
	{
		if (b == 0) 
		{
			cout << "Division By Zero" << 
					endl;
			return INFINITY;
		}
		else
		{
			return a / b;
		}
	}
};

int main() 
{
	int ch;
	Calculator c1; 
	cout << "this is your calculatore"<<endl;
         cout<<"your choice"<<endl;
         cout<<"1.sum"<<endl;
         cout<<"2.sub"<<endl;
         cout<<"3.mul"<<endl;
         cout<<"4.div";
		
	do
	{
		cout << "\nEnter Choice: ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			c1.result();	 
			cout << "Result: " << 
		    c1.add() << endl; 
			break;

		case 2:
			c1.result();
			cout << "Result: " << 
			c1.sub() << endl;
			break;

		case 3:
			c1.result();
			cout << "Result: " << 
			c1.mul() << endl; 
			break;

		case 4:
			c1.result();
			cout << "Result: " << 
			c1.div() << endl; 
			break;
		}
		
	} while (ch >= 1 && ch <= 4);
	
	return 0;
}