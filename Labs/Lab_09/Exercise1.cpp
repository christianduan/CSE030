#include <iostream>
#include "Stack.cpp"
#include "LinkedList.cpp"
#include "Stack.h"
#include "LinkedList.h"

using namespace std;

int main(){
  Stack stack;

  for(int i = 0; i < 10; i++){
    stack.push(i);
  }

  for(int i = 10; i > 0; i--){
    cout << stack.top();
    cout << endl;
    stack.print();
    cout << endl;
    cout << i << endl;
    stack.pop();
    cout << endl;

    if(!stack.isEmpty()){
      cout << "Stack is not empty." << endl;;
    }
    else{
      cout << "Empty stack," << endl;;
    }
  }
}