#include <iostream>

using namespace std;

int main(){
  // Declaring array size variable
  int arrSize;
  int swapCount = 0;
  
  // Asks user to set the array size
  cout << "Enter the size of the array: ";
  cin >> arrSize;
  cin.ignore();

  // Outputs an error for a negative array size
  if(arrSize <= 0){
    cout << "ERROR: you entered an incorrect value for the array size!";
    return 0;
  }
  
  // User inputs contents of the array
  cout << "Enter the numbers in the array, separated by a space, and press enter: ";
  int arr[arrSize];

  // Sets the line's content into the array
  if(arrSize > 0){
    for(int i=0; i < arrSize; i++){
      scanf("%i", &arr[i]);
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  // Loops through all the numbers of the array
  for(int i= arrSize-1; i > 0; i--){
    int max = arr[0];
    int maxIndex = 0;
    // Sets the index values to temporary values
    for(int j = 0; j <= i; j++){
      if(arr[j] < arr[maxIndex]){
        max = arr[j];
        maxIndex = j;

      }
    }
    // Checks if the numbers are successive of one another from greatest to least. If not, swaps their place
    if(maxIndex != i){
      swap(arr[maxIndex], arr[i]);
      swapCount++;
    }
  }

  // Prints out the sorted array in a decreasing array
  cout << "Sorted decreasing array: ";
  for(int i=0; i < arrSize; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << swapCount << endl;

  return 0;
}