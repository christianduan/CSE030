#include <iostream>
#include "Queue.cpp"
#include "LinkedList.cpp"
#include "Queue.h"
#include "LinkedList.h"

using namespace std;

int main(){
  Queue queue;

  for(int i = 0; i < 10; i++){
    queue.enqueue(i);
  }

  for(int i = 10; i > 0; i--){
    cout << queue.front();
    cout << endl;
    queue.print();
    cout << endl;
    cout << queue.size() << endl;
    queue.dequeue();
    cout << endl;

    if(!queue.isEmpty()){
      cout << "Queue is not empty." << endl;;
    }
    else{
      cout << "Empty queue," << endl;;
    }
  }
}