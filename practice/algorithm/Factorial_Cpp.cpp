//Factorial
//2016-10-10
//by cla
#include <iostream>

using std::cout;
using std::cin;

class Factorial
{
private:
	int n;
public:
	int factorial_recursion(int n)//recursion
	{
		if (n < 0) return 0;
		else if (n == 0) return 1;
		else if (n == 1) return 1;
		else if (n > 1) return n*factorial_recursion(n - 1);
	}

	int factorial_tail_recursion(int n, int a)//tail recursion
	{
		if (n < 0) return 0;
		else if (n == 0) return 1;
		else if (n == 1) return a;
		else if (n > 1) return factorial_tail_recursion(n - 1, a*n);
	}
};

int main()
{
	Factorial fct;
	cout << fct.factorial_recursion(10) << std::endl;
	cout << fct.factorial_tail_recursion(5,1) << std::endl;
	cin.get();
	return 0;
}
