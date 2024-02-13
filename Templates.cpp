#include<iostream>

using namespace std;

//basic of template functions
template<class T>
T add(T a,T b){
  return a+b;
}

int main(){
  double a =1.45;
  double b = 7.5;
  cout<<add(a,b)<<endl;
  return 0;
}
