#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Time{
  int HH;
  int MM;
  int SS;
};

bool getTimeFromUser(struct Time &time){
  string s;
  int count = 0;
  getline(cin, s);

  // Gathers hours, minutes, and seconds from string
  time.HH = atoi(s.substr(0, 2).c_str());
  time.MM = atoi(s.substr(3, 5).c_str());
  time.SS = atoi(s.substr(6, 8).c_str());

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

void print24Hour(struct Time time){
  cout << setfill('0') << setw(2) << time.HH << ':' << setfill('0') << setw(2) << time.MM << ':' << setfill('0') << setw(2) << time.SS;
}

int main(){
  struct Time start;
  struct Time end;

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