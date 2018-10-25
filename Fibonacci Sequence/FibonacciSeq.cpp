#include<iostream>

using namespace std;

//Function Prototypes
int RecursiveFibonacci(int);
void NonRecursiveFibonacci(int);

//Main
int main()
{
	int n, count;
	int i = 0;
		
	cout << "\n\n Welcome! This program will get us to play around with Fibonacci Sequences! \2" << endl << endl;
	cout << "\n\n Please enter your N \2 : ";
	cin >> n;
		
	cout << "\n\n N value is: " << n << "\n";
	cout << "\n\n In a Recursice Version, this is your Fibonacci Sequences : \n\n";
	cout << endl;
	
	for (count = 1; count <= n; count++)
	{
		//Function Call
		cout << " " << RecursiveFibonacci(i) << " ";
		i++;
	}

	cout << "\n\n";
	
	cout << "\n\n In an Iterative Version, this is your Fibonacci Sequences : \n\n";

	//Function Call
	NonRecursiveFibonacci(n);

	cout << endl << endl;

	return 0;
}

//Recursive Function
int RecursiveFibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return (RecursiveFibonacci(n - 1) + RecursiveFibonacci(n - 2));
}

//Functions

//NonRecursive Function
void NonRecursiveFibonacci(int n)
{
	int count;

	int a = 0;
	int b = 1;
	int fib;

	for (count = 0; count < n; count++)
	{
		if (count <= 1)
			fib = count;
		else
		{
			fib = a + b;
			a = b;
			b = fib;
		}

		cout << " " << fib << " ";
	}
}