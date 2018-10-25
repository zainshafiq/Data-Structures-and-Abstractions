//Main.cpp

#include<iostream>
#include <fstream>
#include<stack>
#include<string>

using namespace std;

//Function Prototypes
string infixTopostfix(string exPress);
int highPrecedence(char operator_1, char operator_2);
bool IsOperator(char C);
bool IsOperand(char C);

//Main
int main()
{
	string exPress;
	cout << "Welcome!! Today We Will Write a program to convert an infix expression to a postfix expression using a stack!!" << endl << endl;
	cout << endl << "Please Enter Any Infix Expression -- > ";
	cin >> exPress;
	string postfix = infixTopostfix(exPress);
	cout << "The Output = " << postfix << endl << endl;
}

//Function Definitions

//Converting Infix Expression to Postfix Expression
string infixTopostfix(string exPress)
{
	stack<char> stack;
	string postfix = " ";
	
	for (int i = 0; i< exPress.length(); i++) 
	{
		if (exPress[i] == ' ' || exPress[i] == ',')
			continue;
		else if (IsOperator(exPress[i]))
		{
			while (!stack.empty() && stack.top() != '(' && highPrecedence(stack.top(), exPress[i]))
			{
				postfix += stack.top();
				stack.pop();
			}
			stack.push(exPress[i]);
		}
		else if (IsOperand(exPress[i]))
		{
			postfix += exPress[i];
		}
		else if (exPress[i] == '(')
		{
			stack.push(exPress[i]);
		}

		else if (exPress[i] == ')')
		{
			while (!stack.empty() && stack.top() != '(') {
				postfix += stack.top();
				stack.pop();
			}
			stack.pop();
		}
	}

	while (!stack.empty()) {
		postfix += stack.top();
		stack.pop();
	}

	return postfix;
}

//Verifying whether a Character is Operator Symbol or not.
bool IsOperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '$')
		return true;

	return false;
}

//Verifying whether a Character is Alphanumeric Character (Alphabet or Numerical Digit) or not
bool IsOperand(char C)
{
	if (C >= '0' && C <= '9') 
		return true;
	if (C >= 'a' && C <= 'z') 
		return true;
	if (C >= 'A' && C <= 'Z') 
		return true;
	
	return false;
}

int rightAssociative(char op)
{
	if (op == '$') 
		return true;
	
	return false;
}

int IsOperatored(char op)
{
	int pred = -1;
	
	switch (op)
	{
	case '+':
	case '-':
		pred = 1;
	case '*':
	case '/':
		pred = 2;
	case '$':
		pred = 3;
	}
	
	return pred;
}

//Verifying whether an Operator has Higher Precedence over Other or not
int highPrecedence(char op1, char op2)
{
	int op1_pred = IsOperatored(op1);
	int op2_pred = IsOperatored(op2);

	if (op1_pred == op2_pred)
	{
		if (rightAssociative(op1)) 
			return false;
		else 
			return true;
	}

	return op1_pred> op2_pred ? true : false;
}