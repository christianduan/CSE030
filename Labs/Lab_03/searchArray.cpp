#include <iostream>

using namespace std;

int main(){
  // Declaring variables
  int arrSize;
  int v;
  int checks = 0;

  // Asks the user to set the size of the array.
  cout << "Enter the size of the array: ";
  cin >> arrSize;
  cin.ignore();

  // Checks if the inputted array size is a valid value.
  if(arrSize <= 0){
    cout << "ERROR: you entered an incorrect value for the array size!" << endl;
    return 0;
  }

  // Asks the user to input the contents of the array.
  cout << "Enter the numbers in the array, separated by a space, and press enter: ";
  int arr[arrSize];

  // Checks if the inputted array size is a valid value.
  if(arrSize > 0){
    // Prints out the array
    for(int i=0; i < arrSize; i++){
      scanf("%i", &arr[i]);
      cout << arr[i] << " ";
    }
    cout<< endl;
  }

  // Asks user to enter a number to search for
  cout << "Enter a number to search for in the array: ";
  cin >> v;
  
  // Finds the key in the array
  for(int i=0; i < arrSize; i++){
    if(arr[i] == v){
      checks++;
      cout << "Found value " << v << " at index " << i << ", which took " << checks << " checks." << endl;
      break;
    }
    else if(arr[i] != v){
      checks++;
    }
  }

  // Outputs whether we ran into the best or worst case scenario
  if(checks == 1){
    cout << "We ran into the best case scenario!" << endl;
  }
  else{
    cout << "We ran into the worst case scenario!" << endl;
  }

  return 0;
}