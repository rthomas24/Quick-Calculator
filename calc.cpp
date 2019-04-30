#include <iostream>
#include <vector>
#include <string>
using namespace std;

float addition(){
  cout << "How many numbers would you like to add? " << endl;
  int numAmount;
  cin >> numAmount;
  cout << numAmount << endl;
  float *arr = new float[numAmount];
  float result;
  for(int i =0; i< numAmount; i++){
    cout << "Enter the number to be added: " <<endl;
    cin >> arr[i];
    result = result + arr[i];

}
  cout << "Your result is " << result   << endl;
  return result;

}


float subtraction(){
  cout << "How many numbers would you like to subtract? " << endl;
  int numAmount;
  cin >> numAmount;


  float *arr = new float[numAmount];
  float result =1;
  float newResult = 0;
  for(int i =0; i< numAmount; i++){
    cout << "Enter the number to be subtract: " <<endl;
    cin >> arr[i];
    }

  result = arr[0];
  int count = 0;
  for(int i = 0; i < numAmount; i++){
      newResult = result - arr[count];
      count++;
    }
  cout << "Your result is " << newResult   << endl;
  return newResult;

}


float multiplication(){
  cout << "How many numbers would you like to add? " << endl;
  int numAmount;
  cin >> numAmount;

  float *arr = new float[numAmount];
  float result = 1;
  for(int i =0; i< numAmount; i++){
    cout << "Enter the number to be multiply: " <<endl;
    cin >> arr[i];
    result = result * arr[i];

}
  cout << "Your result is " << result   << endl;
  return result;

}

float division(){

  cout << "How many numbers would you like to divide? " << endl;
  int numAmount;
  cin >> numAmount;

  if(numAmount > 2){
    "This calculator is only good for dividing 2 numbers";
  }


  float *arr = new float[numAmount];
  float result = 1.0;
  for(int i =0; i< numAmount; i++){
    cout << "Enter the number to be divided: " <<endl;
    cin >> arr[i];
    result = arr[0] / arr[1];

}
  cout << "Your result is " << result   << endl;
  return result;

}





int main() {

  int choice = 0;
  cout << "1 - Addition" << endl;
  cout << "2 - Subtraction" << endl;
  cout << "3 - Multiplication" << endl;
  cout << "4 - Division" << endl;
  cout << "Enter the Number of what operator you would like to use: "<< endl;
  cin >> choice;

  if (choice == 1){
    addition();
  }

  if(choice == 2){
    subtraction();
  }

  if(choice == 3){
    multiplication();
  }

  if(choice == 4){
    division();
  }
}