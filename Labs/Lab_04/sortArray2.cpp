#include <iostream>

using namespace std;

void sortArr(int selection, int arr[], int arrSize){
  if(selection == 0){
    if(arrSize > 0){
      int saved;
      int j;
      for (int i = 1; i < arrSize; i++)
      {
          saved = arr[i];
          j = i - 1;
          while (j >= 0 && arr[j] > saved)
          {
              arr[j + 1] = arr[j];
              j = j - 1;
          }
          arr[j + 1] = saved;
      }
    }
  }
  else if(selection == 1){
    if(arrSize > 0){
      int saved;
      int j;
      for (int i = 1; i < arrSize; i++)
      {
          saved = arr[i];
          j = i - 1;
          while (j >= 0 && arr[j] < saved)
          {
              arr[j + 1] = arr[j];
              j = j - 1;
          }
          arr[j + 1] = saved;
      }
    }
  }
}

int main(){
  // Declaring array size variable
  int arrSize;
  int selection;
  
  // Asks user to set the array size
  cout << "Enter the size of the array: ";
  cin >> arrSize;
  cin.ignore();

  // Outputs an error for a negative array size
  if(arrSize <= 0){
    cout << "ERROR: you entered an incorrect value for the array size!";
    return 0;
  }
  else{
    // User inputs contents of the array
    cout << "Enter the numbers in the array, separated by a space, and press enter: ";
    int arr[arrSize];

    // Sets the line's content into the array
    if(arrSize > 0){
      for(int i=0; i < arrSize; i++){
        scanf("%i", &arr[i]);
      }
    }
    cout << "Sort in ascending (0) or descending (1) order? ";
    cin >> selection;
    sortArr(selection, arr, arrSize);

    for(int i = 0; i < arrSize; i++){
      cout << arr[i] << " ";
    }
    cout << endl;
      
    return 0;
  }
  return 0;
}