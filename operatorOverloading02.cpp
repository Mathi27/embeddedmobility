
#include<iostream>

using namespace std;
/**
 To demonstrate the operator overloading concept .
**/
class Number{
     int value;
   public :
   Number(){}
   //Constructor.9
     Number(int FirstValue){
       value = FirstValue;
     }

     Number operator+(Number SecondValue){
         Number storeAddedValue;
         storeAddedValue.value = value + SecondValue.value;
         return storeAddedValue;

     }
     Number operator-(Number SecondValue){
        Number storeDifferenceValue;
        storeDifferenceValue = SecondValue.value - value;
        return storeDifferenceValue;
     }

     Number operator*(Number SecondValue){
         Number storeMulipliedValue;
         storeMulipliedValue = value * SecondValue.value;
         return storeMulipliedValue;
     }

     Number operator/(Number SecondValue){
        Number storeDividedValue;
        storeDividedValue = value / SecondValue.value;
        return storeDividedValue;
     }

     /**
     Number operator>(Number SecondValue ){
         Number storeGreaterThanValue ;
         storeGreaterThanValue = SecondValue > value;
         return storeGreaterThanValue;
     } **/



    void printNumber(){
        cout<< "Output "<<value <<"\n";
    }

 };
int main(){
       Number a(10);
       Number b(20);

       Number AddedResult = a + b;
       AddedResult.printNumber();


       Number subractedResult = a - b ;
       subractedResult.printNumber();

       Number multipliedResult = a * b;
       multipliedResult.printNumber();

       Number dividedResult = a/b;
       dividedResult.printNumber();

     /**  Number greaterThanSecond = a>b;
       greaterThanSecond.printNumber();
       **/

       return 0;
}
