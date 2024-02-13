#include<iostream>

using namespace std;

// Template Classes.
template <class T>
class Numbers{

         //int first;
         T firstValue;
         T secondValue;
         public:
         Numbers(T a, T b){
         firstValue = a;
         secondValue = b;
         }

         T larger(){
           if(firstValue > secondValue){
              return firstValue;
           }else{
            return secondValue;
           }
         }
};
int main(){

   Numbers<double> numbers(5.5,3.6);
   cout<<numbers.larger()<<endl;
    return 0;
}
