#include<iostream>
using namespace std;


int main(){
  try{
  int FatherAge = 50;
  int sonAge = 100;

  if(sonAge>FatherAge){
     throw "Error happend";
  }

  }catch(...){
      cout<<"Son Age is Greater than Father"<<endl;
  }

  cout << "HERE "<<endl;
  return 0;
}
