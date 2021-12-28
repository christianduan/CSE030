#include <iostream>
using namespace std;

int main(){
  int numSentences;
  int numTypo;

  cout << "Enter the number of lines for the punishment: ";
  cin >> numSentences;

  if(numSentences < 0){
    cout << "You entered an incorrect value for the number of lines!";

    return 0;
  }

  cout << "Enter the line for which we want to make a typo: ";
  cin >> numTypo;

  if(numSentences > 0 && numTypo > 0){
    for(int i = 0; i < numSentences; i++){
      if (i == (numTypo - 1)){
        cout << "I will always use object oriented programing.";
      }
      else{
        cout << "I will always use object oriented programming.";
      }
    }
  }
  else if(numTypo <= 0){
    cout << "You entered an incorrect value for the line typo!";
  }
  return 0;
}