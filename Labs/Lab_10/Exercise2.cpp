#include <iostream>
#include "LinkedList_char.cpp"
#include "Queue_char.cpp"
#include "Queue_char.h"
#include "LinkedList_char.h"

using namespace std;

int main(){
  Queue_char queue_char;

  cout << "dequeue()    exception" << endl;

  queue_char.enqueue('D');
  cout << "enqueue(D)               ";
  queue_char.print();
  cout << endl;

  queue_char.enqueue('A');
  cout << "enqueue(A)               ";
  queue_char.print();
  cout << endl;

  queue_char.dequeue();
  cout << "dequeue()        D       ";
  queue_char.print();
  cout << endl;

  cout << "size()           " << queue_char.size() << "       ";
  queue_char.print();
  cout << endl;

  queue_char.enqueue('D');
  cout << "enqueue(D)               ";
  queue_char.print();
  cout << endl;

  if(queue_char.isEmpty()){
    cout << "isEmpty()      true     ";
    queue_char.print();
    cout << endl;
  }
  else{
    cout << "isEmpty()      false     ";
    queue_char.print();
    cout << endl;
  }

  cout << "front()          " << queue_char.front() << "       ";
  queue_char.print();
  cout << endl;

  queue_char.enqueue('T');
  cout << "enqueue(T)               ";
  queue_char.print();
  cout << endl;

  cout << "front()          " << queue_char.front() << "       ";
  queue_char.print();
  cout << endl;
}