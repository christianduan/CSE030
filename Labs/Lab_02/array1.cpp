#include <iostream>
#include <string>
using namespace std;

int main(){
  // Declaring variables
  int arrSize;

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
    
    for(int i=1; i < arrSize; i++){
      // If the array is decreasing.
      if(arr[i] < arr[i-1]){
        cout << "This is NOT an increasing array!" << endl;
        break;
      }
      // If the array is increasing.
      else if(i == arrSize - 1){
        cout << "This IS an increasing array!" << endl;
      }
    }
  }

  return 0;
}