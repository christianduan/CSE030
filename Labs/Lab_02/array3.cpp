#include <iostream>
using namespace std;

int main(){
  // Declaring variables in the program
  int arrSize;
  int input;
  int negative = 0;


  // Asks user to set the size of the array
  cout << "Enter the size of a 2D array: ";
  cin >> arrSize;
  cin.ignore();
  
  // Declaring array
  int arr[arrSize][arrSize];

  // Checks is the inputted array size is a between 1 and 10
  if(arrSize <= 0){
    cout << "ERROR: your entered an incorrect value for the array size!" << endl;
    return 0;
  }
  if(arrSize > 10){
    cout << "ERROR: your array is too large! Enter 1 to 10." << endl;
    return 0;
  }
  else if(arrSize <= 10 && arrSize >= 1){
    for(int i = 1; i <= arrSize; i++){
      // Asks user to input array contents
      cout << "Enter the values in the array for row " << i << ", separated by a space, and press enter: ";
      for(int j = 0; j < arrSize; j++){
        scanf("%i", &arr[i][j]);
        if(arr[i][j] < 0){
          negative++;
        }
      }
    }
    
    // Outputs whether or not there are negative values in the array
    if(negative > 0){
      cout << "There are " << negative << " negative values!" << endl;
      return 0;
    }
    else if(negative <= 0){
      cout << "All values are non-negative!" << endl;
      return 0;
    }
  }

  return 0;
}