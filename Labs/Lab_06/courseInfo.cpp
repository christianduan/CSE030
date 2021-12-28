#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct Time{
  int HH;
  int MM;
  int SS;

  Time(){
      HH = 0;
      MM = 0;
      SS = 0;
  }

  Time(int hour, int min, int sec){
      this->HH = hour;
      this->MM = min;
      this->SS = sec;
  }
};
// Structures the information for the course
struct Course{
  string name;
  int credits;
  bool majorRequirement;
  double avgGrade;
  string days;
  Time startTime;
  Time endTime;

  Course(){
    name = " ";
    majorRequirement = false;
    credits = 0;
    avgGrade = 0;
    days = " ";
    Time startTime;
    Time endTime;
  }
};

// Gathers the time from the input file
bool getTimeFromUser(string s, Time& time){

  string hour = s.substr(0, s.find(":"));
  string min = s.substr(s.find(":") + 1, s.find(":"));
  string sec = s.substr(s.find_last_of(":")+1, s.length());

  int hour_i = stoi(hour);
  int min_i = stoi(min);
  int sec_i = stoi(sec);

  if(hour_i > 24 || min_i > 59 || sec_i > 59){
      return false;
  }

  time = Time(hour_i, min_i, sec_i);
  return true;
};

// Writes the time in 24 hour
void print24Hour(Time time){
  cout << setw(2) << setfill('0') << time.HH << ":";
  cout << setw(2) << setfill('0') << time.MM << ":";
  cout << setw(2) << setfill('0') << time.SS << ":";
}


// Converts the time from 24 hour to 12 hour
void print12Hour(Time time){
  bool pastNoon = false;

  if(time.HH > 12){
      pastNoon = true;
  }

  int hour = time.HH % 12;
  
  if(hour == 12){
      hour = 12;
  }

  cout << setw(2) << setfill('0') << hour << ":";
  cout << setw(2) << setfill('0') << time.MM << ":";
  cout << setw(2) << setfill('0') << time.SS;

  if(pastNoon == true){
      cout << "PM";
  }
  else{
      cout << "AM";
  }
}

// Prints out the courses' info
void printCourseInfo(Course course, int n){
  cout << "Course " << n << " : " << course.name << endl;

  if(course.majorRequirement == true){
      cout << "This course is a major requirement." << endl;
  }
  else{
      cout << "This course is not a major requirement." << endl;
  }

  cout << "Number of credits: " << course.credits << endl;
  cout << "Days of lecture: " << course.days << endl;
  cout << "Lecture time: ";
  print12Hour(course.startTime);
  cout << " - ";
  print12Hour(course.endTime);
  cout << endl;
  cout << "Class Fact: On average, students gets " << course.avgGrade << " % in this course." << endl;
  cout << "-------------------------------------" << endl;
};

int main(){
    struct Course course;

    int count = 0;
    int i = 0;
    string data;

    // Opens the input file
    ifstream file("in.txt");

    // Counts the lines of data
    while (getline(file, data)){
        count++;
    } 

    // Creates an array for the data of the input file
    string *arr = new string[count];

    // Goes back to the top of the input file
    file.clear();
    file.seekg(0);

    while(getline(file, data)){
        arr[i] = data;
        i++;
    }

    // Prints out the schedule
    cout << "-------------------------------------" << endl;
    cout << "Schedule" << endl;
    cout << "-------------------------------------" << endl;

    for (int i = 1; i < count; i += 7){
        Time startT = Time();
        getTimeFromUser(arr[i + 5], startT);

        Time endT = Time();
        getTimeFromUser(arr[i + 6], endT);

        Course updated_course = Course();
        updated_course.name = arr[i];
        updated_course.majorRequirement= stoi(arr[i + 2]);
        updated_course.credits = stoi(arr[i + 1]);
        updated_course.days = arr[i + 4];
        updated_course.startTime = startT;
        updated_course.endTime = endT;
        updated_course.avgGrade = atof(arr[i + 3].c_str());

        printCourseInfo(updated_course, (i / 7) + 1);
    }

    delete[] arr;

}