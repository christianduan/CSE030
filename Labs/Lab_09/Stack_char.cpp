#include <iostream>
#include "Stack_char.h"
#include "LinkedList_char.h"

using namespace std;

// Exercise 1
// Constructor
Stack_char::Stack_char(){
}

// Deconstructor
Stack_char::~Stack_char(){
}

// Push function
void Stack_char::push(char value){
  LinkedList_char::insertAtBack(value);
}

// Pop function
char Stack_char::pop(){
  char popped = last->val;
  LinkedList_char::removeFromBack();
  return popped;
}

// Top function
char& Stack_char::top(){
  return last->val;
}
