#include <iostream>
using namespace std;

int nonStatic_counter(){
  int cnt = 0;
  return cnt++;
}

int counter(){
  static int cnt = 0;
  return cnt++;
}

const char* digit(int i){
  static char digits[10][10]={
    "zero",
    "one",
    "two", 
    "three", 
    "four", 
    "five", 
    "six", 
    "seven", 
    "eight", 
    "nine"
  };
  return digits[i%10];
}

int main(){
  int i;
  for(i=0;i<10;i++){
    cout<< nonStatic_counter()<<endl;
  }
  for(i=0;i<10;i++){
    cout<<counter()<<endl;
  }
  for(i=0;i<10;i++){
    cout<<digit(i)<<endl;
  }
  return 0;
}