#include <iostream>
#include <cstring>
using namespace std;

bool validYear(int year, char* errmes){
  bool res = false;
  if(year >= 2010 && year <= 2020){
    res  = true;
  }
  else{
    strcpy(errmes, "Invalid year (2010<=year<=2020)");
  }
  return res;
}

bool validMonth(int mon, char* errmes){
  bool res = false;
  if(mon > 0 && mon <=12){
    res  = true;
  }
  else{
    strcpy(errmes, "Invalid month (1<=month<=12)");
  }
  return res;
}

bool validCCV(int ccv, char* errmes){
  bool res = false;
  if(ccv >= 100 && ccv<= 999){
    res  = true;
  }
  else{
    strcpy(errmes, "Invalid CCV (Three digit number)");
  }
  return res;
}


int getInt(const char* prompt, bool (*valid)(int, char*) = 0){
  int num = 0;
  char newline = 0;
  bool done = false;
  char errmes[81];
  cout<<prompt<<"> ";
  while(!done){
    cin >> num;
    if(!cin.fail()){
      newline = cin.get();
      if(newline != '\n'){
        cout<<"Extra chars after number, try again: ";
        cin.ignore(100, '\n');
      }
      else if(valid && !valid(num,errmes)){
        cout<<errmes<<", try again: ";
      }
      else{
        done = true;
      }
    }
    else{
      cin.clear();
      cin.ignore(100, '\n');
      cout<<"Invlid number, try again:";
    }
  }
  return num;
}
int main(){
  int year = 0;
  int mon = 0;
  int ccv= 0;
  int val;
  val = getInt("Enter an int: ");
  cout<<"here is the int: "<<val<<endl;
  cout<<"Please enter expiry date for your creditcard;\n";
  year = getInt("Enter Year",validYear);
  mon = getInt("Enter Month", validMonth);
  ccv = getInt("Enter CCV", validCCV);
  cout<<" your card expiry is "<< mon<<"/"<<year<<" and your ccv is: "<<ccv<<endl;
  return 0;
}
