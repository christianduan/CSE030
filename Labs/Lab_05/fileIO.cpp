#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int count = 0;

void wordCount(){
  // Accessing input file
  ifstream inFile ("words_in.txt");

  // Checks if there is anything in the file
  if(!inFile.eof()){
    string data;
    while(getline(inFile, data)){
      count++;
    }
    
    // Closes input file
    inFile.close();
  }
}

int main(){
  // Gets word count from "words_in.txt"
  wordCount();
  string *arr = new string[count];

  // Accessing and creating array
  ifstream inFile ("words_in.txt");
  if(!inFile.eof()){
    string data;
    int i = 0;

    // Gathers data from "words_in.txt"
    while(getline(inFile, data)){
      arr[i] = data;
      i++;
    }

    // Closes "words_in.txt"
    inFile.close();
  }

  // Outputting array into "words_out.txt"
  ofstream outFile {"words_out.txt"};
  for(int i = 0; i < count; i++){
    outFile << arr[i];
    if(i < (count - 1)){
      outFile << endl;
    }
  }
  // Closes "words_out.txt"
  outFile.close();

  // Deletes pointers and frees memory
  delete[] arr;

  return 0;
}