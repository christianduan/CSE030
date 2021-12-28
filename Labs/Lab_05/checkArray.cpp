#include <iostream>
#include <string>

using namespace std;

int checkArraySort(int array_size, string* arr){
  bool asc = true;
  bool des = true;
  
  for(int i = 0; i < array_size - 1; i++){
    // Checks if array is sorted in ascending order
    if(arr[i] > arr[i + 1]){
      asc = false;
      break;
    }
  }
  // Checks if array is sorted in descending order
  for(int i = 0; i < array_size - 1; i++){
    if(arr[i] < arr[i + 1]){
      des = false;
      break;
    }
  }
  if(asc == false && des == false){
    cout << "The array is not sorted!" << endl;
    return 0;
  }
  else if(asc == true){
    cout << "The array is sorted in ascending order!" << endl;
    return 1;
  }
  else if(des == true){
    cout << "The array is sorted in descending order!" << endl;
    return -1;
  }
  return 0;
}

int main(){
  // Declaring variables
  int arrSize;
  string arr[arrSize];
  
  // Asks user to set the array size
  cout << "Enter the size of the array: ";
  cin >> arrSize;
  cin.ignore();

  // Outputs an error for a negative array size
  if(arrSize <= 0){
    cout << "ERROR: you entered an incorrect value for the array size!" << endl;
    return 0;
  }
  else{
    // User inputs contents of the array
    cout << "Enter the numbers in the array, separated by a space, and press enter: ";
    string *arr = new string[arrSize];

    // Sets the line's content into the array
    if(arrSize > 0){
      for(int i=0; i < arrSize; i++){
       cin >> arr[i];
      }
    }
    cout << checkArraySort(arrSize, arr) << endl;
  }
}