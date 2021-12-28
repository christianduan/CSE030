#include <iostream>
#include <string>
#include <iomanip>
#include "Time.h"

using namespace std;

bool getTimeFromUser(Time& time){
  string s;
  int count = 0;
  getline(cin, s);

  // Gathers hours, minutes, and seconds from string
  time.setHours(atoi(s.substr(0, 2).c_str()));
  time.setMinutes(atoi(s.substr(3, 5).c_str()));
  time.setSeconds(atoi(s.substr(6, 8).c_str()));

  for(int i = 0; i < 8; i++){
    if((s.c_str()[i] >= '0' && s.c_str()[i] <= '9') || s.c_str()[i] == ':'){
      count++;
    }
  }
  // Compares if values inputted for the time is within the 
  if(atoi(s.substr(0, 2).c_str()) < 0 || atoi(s.substr(0, 2).c_str()) > 23 || atoi(s.substr(3, 5).c_str()) < 0 || atoi(s.substr(3, 5).c_str()) > 59 || atoi(s.substr(6, 8).c_str()) < 0 || atoi(s.substr(6, 8).c_str()) > 59 || count < 8 || count > 8){
    return false;
  }
  return true;
}

void print24Hour(Time time){
  cout << setfill('0') << setw(2) << time.getHours();
  cout << ':' << setfill('0') << setw(2) << time.getMinutes(); 
  cout << ':' << setfill('0') << setw(2) << time.getSeconds();
}

int main(){
  Time start;
  Time end;

  cout << "Enter the start time for the lecture (format is HH:MM:SS): ";
  bool timeStart = getTimeFromUser(start);

  if(timeStart == true){
    cout << "Enter the end time for the lecture (format is HH:MM:SS): ";
    bool timeEnd = getTimeFromUser(end);
    
    if(timeEnd == true){
      cout << "The lecture starts at ";
      print24Hour(start);
      cout << " and ends at ";
      print24Hour(end);
      cout << "." << endl;
    }
    else{
      cout << "The end time entered is invalid!" << endl;
    }
  }
  else{
    cout << "The start time entered is invalid!" << endl;
  }

  return 0;
}