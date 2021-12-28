#include <iostream>
#include <string>

using namespace std;

// Creating combineStr function
string combineStr(string input, int number){
  string newString = input;

  // For loop to print string given amount of time
  for(int i=1; i < number; i++){
    input += newString;
    
  }
  return input;
}

int main(){
  // Declaring variables
  string input;
  int number = 1;

  while(number != 0){
    // User input for string and time to combine
    cout << "Enter a string: ";
    cin >> input;

    cout << "Enter a number of times: ";
    cin >> number;
    if(number != 0){
      cout << "The resulting string is: " << combineStr(input, number) << endl;
    }
  }
  return 0;
}