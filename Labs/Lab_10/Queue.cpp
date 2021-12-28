#include <iostream>
#include "Queue.h"
#include "LinkedList.h"

using namespace std;

// Exercise 1
// Constructor
Queue::Queue(){
}

// Deconstructor
Queue::~Queue(){
}

// Enqueue function
void Queue::enqueue(int value){
  LinkedList::insertAtBack(value);
}

// Dequeue function
int Queue::dequeue(){
  int dequeued = first->val;
  LinkedList::removeFromFront();
  return dequeued;
}

// Front function
int& Queue::front(){
  return first->val;
}
