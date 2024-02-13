// OPERATOR OVERLOADING
#include<iostream>
using namespace std;
class Number {

    int number;
    public:
      Number(){}

      Number(int a){
        number = a;
      }

      //here we need to use the number class in place of int
// we need to return a value so the type is number;
   Number operator+(Number x){
             Number toReturnNumber;
             toReturnNumber.number = number + x.number;
             return toReturnNumber;
   }

   Number operator-(Number y){
            Number toReturnDifference;
            toReturnDifference.number = number - y.number;
            return toReturnDifference;
   }

   void printNumber(){
     cout<< number <<endl;
   }

};


int main(){
 // int a = 2;
 // int b = 5;

 Number a(4);
 Number b(5);

 // Number c = a + b; // what it does is: it call a.operator+(b);

 Number n = b-a;
 n.printNumber();


 return 0;
}
