#include <iostream>
#include "Queue_char.h"
#include "LinkedList_char.h"

using namespace std;

// Exercise 2
// Constructor
Queue_char::Queue_char(){
}

// Deconstructor
Queue_char::~Queue_char(){
}

// Enqueue function
void Queue_char::enqueue(char value){
  LinkedList_char::insertAtBack(value);
}

// Dequeue function
char Queue_char::dequeue(){
  char dequeued = first->val;
  LinkedList_char::removeFromFront();
  return dequeued;
}

// Front function
char& Queue_char::front(){
  return first->val;
}
