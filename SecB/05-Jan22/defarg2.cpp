#include <iostream>
using namespace std;


void bar(char ch='=', unsigned int length=60){
  int i;
  for(i=0;i<length;i++){
    cout.put(ch);
  }
  cout<<endl;
}



int main(){
  bar('-', 20);
  bar('*');
  bar();
  bar('@', 40);
  bar(65); // test
  return 0;
}