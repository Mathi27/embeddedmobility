#include<iostream>

using namespace std;
// Function Templates.
// here T is type
template <class T>
T add(T a ,T b){
  return a + b;
}

int main(){
   double a = 5.5 ,b = 7;
   cout<<add(a,b)<<endl;
   return 0;
}



/**


normal function:
  int add(int a, int b){
      return a + b;
  }
  double add(double a , double b){
   return a+b;
  }
**/
