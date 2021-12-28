#include <iostream>
#include <string>
using namespace std;

int main(){
  string input;

  // Asks user to input a string to reverse
  cout << "Enter a string to reverse:";
  cin >> input;

  // Creates a count value
  int count = input.size();

  // Outputs the reversed string
  for(int i = count; i > -1; i--){
    cout << input[i];
  }
  cout << endl;
  return 0;
}