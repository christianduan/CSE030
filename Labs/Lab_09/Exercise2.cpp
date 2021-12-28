#include <iostream>
#include "LinkedList_char.cpp"
#include "Stack_char.cpp"
#include "Stack_char.h"
#include "LinkedList_char.h"

using namespace std;

int main(){
  Stack_char stack_char;

	if (stack_char.isEmpty())
	{
		cout << "isEmpty()	true	";
		stack_char.print();
		cout << endl;
	}
	else
	{
		cout << "isEmpty()	false	";
		stack_char.print();
		cout << endl;
	}

	stack_char.push('A');
	cout << "push(A)		";
	stack_char.print();
	cout << endl;

	stack_char.push('Y');
	cout << "push(Y)		";
	stack_char.print();
	cout << endl;

	cout << "size()     " << stack_char.size() << "     ";
	stack_char.print();
	cout << endl;

	cout << "pop()     " << stack_char.pop() << "     ";
	stack_char.print();
	cout << endl;

	if (stack_char.isEmpty())
	{
		cout << "isEmpty()	true	";
		stack_char.print();
		cout << endl;
	}
	else
	{
		cout << "isEmpty()	false     ";
		stack_char.print();
		cout << endl;
	}

	stack_char.push('D');
	cout << "push(D)		";
	stack_char.print();
	cout << endl;

	cout << "top()     " << stack_char.top() << "     ";
	stack_char.print();
	cout << endl;
	
	stack_char.push('T');
	cout << "push(T)		";
	stack_char.print();
	cout << endl;

	cout << "pop()     " << stack_char.pop() << "     ";
	stack_char.print();
	cout << endl;
}