#ifndef QUEUE_CHAR_H
#define QUEUE_CHAR_H
#include "LinkedList_char.h"

using namespace std;

class Queue_char: public LinkedList_char{
  public:
    Queue_char();
    ~Queue_char();
    void enqueue(char value);
    char dequeue();
    char& front();
};

#endif