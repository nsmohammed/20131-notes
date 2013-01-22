#include <iostream>
using namespace std;
void bar(char ch, unsigned int length){
  unsigned int i;
  for(i=0;i<length;i++){
    cout.put(ch);
  }
  cout<<endl;
}
void bar(char ch){
  bar(ch, 60);
}
void bar(){
  bar('=');
}

int main(){
  bar('*', 10);
  bar('*');
  bar();
  return 0;
}