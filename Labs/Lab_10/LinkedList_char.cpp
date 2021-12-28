#include <iostream>
#include "LinkedList_char.h"

using namespace std;

// Exercise 1
// Default constructor
LinkedList_char::LinkedList_char(){
  first = NULL;
  last = NULL;
}

// Deconstructor
LinkedList_char::~LinkedList_char(){
  clear();
}

// Inserts a value at the end of the list
void LinkedList_char::insertAtBack(char valueToInsert){
  Node* v = new Node();
  v->val = valueToInsert;
  if(first == NULL){
    first = v;
  }
  if(last == NULL){
    last = v;
  }
  else{
    last->next = v;
    last = v;
  }
}

// Removes a value at the end of the list
bool LinkedList_char::removeFromBack(){
  Node* v = first;
  if(first == NULL){
    return false;
  }
  if(first == last){
    delete first;
    first = NULL;
    last = NULL;
  }
  else{
    while(v->next != last){
      v = v->next;
    }
  }
  delete last;
  last = v;
  return true;
}

// Prints the list out from the linked list
void LinkedList_char::print(){
  Node* current;
  current = first;
  if(current != NULL){
    while(current != last){
    cout << current->val << ", ";
    current = current->next;
    }
    cout << current->val;
  }
  else{
    cout << " ";
  }
}

// Tells whether the list is empty or not
bool LinkedList_char::isEmpty(){
  if(first == NULL){// Returns whether or not the list's first node is empty
    return true;
  }
  else{
    return false;
  }
}

// Returns the size of the list
int LinkedList_char::size(){
  int count = 0;
  Node* current = first;
  if(current == NULL){
    return 0;
  }
  if(last == NULL){
    return 0;
  }
  else{
    while(current != NULL){
      count++;
      current = current->next;
    }
    return count;
  }
}


// Clears the list if not already empty
void LinkedList_char::clear(){
  while(!isEmpty()){
    removeFromBack();
  }
}


// Exercise 2
// Adds a new value at the front of the list
void LinkedList_char::insertAtFront(char valueToInsert){
  if(first == NULL){
  Node* v = new Node();
  v->val = valueToInsert;
  v->next = first;
  first = v;
  last = v;
  }
  else{
    Node* v = new Node();
    v->val = valueToInsert;
    v->next = first;
    first = v;
  }
}

// Removes the first element in the list
bool LinkedList_char::removeFromFront(){
  if(first == NULL){
    return false;
  }
  else{
    Node* v = first;
    first = v->next;
    delete v;
    return true;
  }
}