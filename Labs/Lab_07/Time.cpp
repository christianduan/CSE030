#include <iostream>
#include <string>
#include "Time.h"

using namespace std;

Time::Time(){
  HH = 0;
  MM = 0;
  SS = 0;
}

Time::Time(int hr, int min, int sec){
  HH = hr;
  MM = min;
  SS = sec;
}

Time::~Time(){

}

void Time::setHours(int hr){
  HH = hr;
}
int Time::getHours(){
  return HH;
}

void Time::setMinutes(int min){
  MM = min;
}
int Time::getMinutes(){
  return MM;
}

void Time::setSeconds(int sec){
  SS = sec;
}
int Time::getSeconds(){
  return SS;
}