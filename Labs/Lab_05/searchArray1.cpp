#include <iostream>
#include <fstream>
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
    return 0;
  }
  else if(asc == true){
    return 1;
  }
  else if(des == true){
    return -1;
  }
  return 0;
}

int binarySearchR(string k, string* arr, int count){
  int mid = count / 2;
  if(count < 0){
      return -1;
  }
  // If the key is in the middle of the array
  if(arr[mid] == k){
      return mid;
  }
  // Searches ascending array
  else if(arr[0] < arr[count - 1]){
    if(arr[mid] < k){
      int ind1 = binarySearchR(k, arr + mid + 1, count - mid - 1);
      if(ind1 == -1){
        return mid + ind1 + 1;
      }
    }
    else{
      int ind2 = binarySearchR(k, arr, mid);

      if(ind2 == -1){
        return -1;
      }
      else{
        return ind2;
      }
    }
  }
  // Searches descending array
  else{
    if(arr[mid] > k){
      int ind1 = binarySearchR(k, arr + mid + 1, count - mid - 1);

      if(ind1 == -1){
        return -1;
      }
      else{
        return mid + ind1 + 1;
        }
      }
    else{
      int ind2 = binarySearchR(k, arr, mid);

      if(ind2 == -1){
        return -1;
      }
      else{
        return ind2;
      }
    }
  }
}

int main(){
  int count = 0;
  string* arr;
  string data;

  // Accessing and creating array
  ifstream inFile;
  inFile.open("words_in.txt");

  // Gathers data from "words_in.txt"
  while(!inFile.eof()){
    getline(inFile, data);
    count++;
  }

  // Creates an array of strings from the input file
  arr = new string[count];
  // Closes and reopens the input file
  inFile.close();
  inFile.open("words_in.txt");

  // Inputs the data from the input file into the array
  for(int i=0; i < count; i++){
    getline(inFile, data);
    arr[i] = data;
  }

  // Finds whether the arrays are sorted
  int sorted = checkArraySort(count, arr);

  if(sorted == 0){
    cout << "Array is not sorted" << endl;
    return 0;
  }
  else{
    string k;
    cout << "Enter a key to search for: ";
    cin >> k;

    int found = binarySearchR(k, arr, count);

    if(found == -1){
      cout << "The key " << k << " was not found in the array." << endl;
      return 0;
    }
    else{
      cout << "Found key " << k << " at index " << found << endl;
      return 0;
    }
  }

  // Closes "words_in.txt"
  delete[] arr;
  inFile.close();
}