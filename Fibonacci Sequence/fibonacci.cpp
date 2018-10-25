//Fibonacci.cpp

#ifndef Fibonacci_cpp
#define Fibonacci_cpp
#include <iostream>
#include "Fibonacci.h"

using namespace std;

//this is function that prints fibonacci series using recursive method
int Fibonacci::RecursiveFibonacci(int n)
{
	//here n is the number of terms
	//if n is 0 return 0 and if n is 1 return 1
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		//else call the function recursively by passing n-1 and n-2 as parameters
		return (RecursiveFibonacci(n - 1) + RecursiveFibonacci(n - 2));
}

void Fibonacci::NonRecursiveFibonacci(int n)
{
	int count;

	//as fibonacci series start with 0, the firstterm is set to 0 and second term is set to 1
	//next term will be firstterm+secondterm
	int firstterm = 0, secondterm = 1, nextterm;

	cout << "\nThe Fibonacci series (Using Iterative method):\n";
	//the loop iterates for n-1 times
	for (count = 0; count < n; count++)
	{
		if (count <= 1)
			nextterm = count;
		else
		{
			//next term will be firstterm+secondterm
			nextterm = firstterm + secondterm;
			//set firstterm to secondterm
			firstterm = secondterm;
			//set secondterm to nextterm
			secondterm = nextterm;
		}
		//print nextterm
		cout << nextterm << " ";
	}
}

#endif