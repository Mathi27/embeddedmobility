#include<iostream>

using namespace std;

class Phone{
      public:
        virtual void iphone15() = 0;
        virtual void iphone15ProMax() = 0;
};

class Iphone : public Phone{
   public :
      void iphone15() override {
         cout<<"This is iphone 15"<<"\n";
         }
        void iphone15ProMax(){
          cout<<"This is Iphone 15 Pro Max";
        }
        // if u only implement the logic for one function which present in the Phone class and forget to implement the logic for another
        // it will give u compile time error.


};

int main(){
     Iphone iphone;
     iphone.iphone15();
     iphone.iphone15ProMax();
}

