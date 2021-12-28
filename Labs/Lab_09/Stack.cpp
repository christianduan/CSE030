#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

using namespace std;

// Exercise 1
// Constructor
Stack::Stack(){
}

// Deconstructor
Stack::~Stack(){
}

// Push function
void Stack::push(int value){
  LinkedList::insertAtBack(value);
}

// Pop function
int Stack::pop(){
  int popped = last->val;
  LinkedList::removeFromBack();
  return popped;
}

// Top function
int& Stack::top(){
  return last->val;
}
