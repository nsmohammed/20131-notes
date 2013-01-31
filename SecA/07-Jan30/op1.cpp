#include <iostream>
using namespace std;

int main(){
  int ar[10] = {1,0,20,0,56,4,0,6,5,0};
  int num = 0;
  int i;
  for(i = 0;i<10; i++){
    num+=(ar[i]>0);
  }
  cout<<num;
  return 0;
}