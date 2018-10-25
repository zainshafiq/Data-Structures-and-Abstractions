

#include "Fibonacci.h"
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
	Fibonacci rec;
	int n, count;
	int i = 0;

	cout << "\nWelcome! With this program, we will play around with a Fibonacci SequenceEnter number of terms to be printed: ";
	cin >> n;

	//call the recursive fibonacci function
	cout << "\nWhen N is " << n << endl;
	cout << "\nThe Fibonacci series (Using Recursive method):\n";

	for (count = 1; count <= n; count++)
	{
		cout << rec.RecursiveFibonacci(i) << " ";
		i++;
	}

	cout << endl << endl;
	//call the non-recursive fibonacci function
	rec.NonRecursiveFibonacci(n);

	return 0;
}