#include <iostream>
using namespace std;

int main(){
  int numSentences;

  cout << "Enter the number of lines for the punishment: ";
  cin >> numSentences;

  if(numSentences > 0){
    for(int i = 0; i < numSentences; i++){
      cout << "I will always use object oriented programming.";
    }
  }
  else{
    cout << "You entered an incorrect value for the number of lines!";
  }
  
  return 0;
}