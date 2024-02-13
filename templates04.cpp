#include<iostream>
using namespace std;
// Template Specialization


template<class T>
//common class
class Value{
   public :
     Value(T a){
      cout<<a<<"  is a Number"<<endl;
     }

};

template <>
class Value<char>{
   public :
     Value(char a){
      cout<<a<<"  is a char"<<endl;
     }

};
int main(){

  Value<int> x(5);
  Value<char> x1('V');
  return 0;
}
