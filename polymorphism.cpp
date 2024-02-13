/**
#include<iostream>

using namespace std;

class Batsman{
   protected:
     int runs;
     public:
       void setRuns(int r){
          runs = r;
       }
};

class Dhoni : public Batsman{
   public:
       void printRuns(){
          cout<<"Dhoni Scored :"<<runs <<endl;
       }
};

class Kohli : public Batsman{
    public :
      void printRuns(){
        cout<<"Kohli scored :"<<runs <<endl;
      }
};
int main(){
   Dhoni dhoni;
   Kohli kohli;

   Batsman* batsman1 = &dhoni;
   Batsman* Batsman2 = &kohli;

   batsman1->setRuns(10);
   Batsman2->setRuns(20);

   dhoni.printRuns();
   kohli.printRuns();
   return 0;
}
**/
/*
Compile-time Polymorphism:
1. Compiler time polymorphism is achieved using function overloading and operator overloading.
2. Function overloading allows you to define multiple functions with the same name
but with different parameters or return types.
3. Operator overloading allows you to redefine the behavior of operators for user-defined types.

example :
#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};
int main(){
    Calculator calc;
    cout<<calc.add(2,5)<<endl;
    cout<<calc.add(2.5,5,4)<<endl;
    return 0;
}
 // this above is the example of function overloading.

 _____________________________________________________________________

 Runtime Polymorphism:

 Runtime polymorphism is achieved using inheritance and virtual functions.
 virtual functions are functions declared within a base class and overridden in derived class.
 The function to be called is determined at runtime based on the type of object reffered
 to by the base class.

*/

#include<iostream>
using namespace std;
class Animal{
   public:
     virtual void makeSound(){
        cout<<"Animal makes a sound"<<endl;
     }
};

class Dog :public Animal{
  public:
    virtual void makeSound() override {
       cout<<"Dog Barks"<<endl;
    }
};
class Cat : public Animal{
     public:
       virtual void makeSound() override {
         cout<<"Cat meows"<<endl;
       }
};

int main(){
/**
    //Creating a base class pointer and pointing to a derived class object.
    Animal* ptr = new Dog();
    ptr->makeSound(); // calls Dog's makeSound() due to runtime polymorphism.

    ptr = new Cat(); // we assign the ptr to a cat object.
    ptr->makeSound(); // calls cat's makesound() due to runtime polymorphism.

    delete ptr;
    return 0;
    **/
   Cat cat;
   Dog dog;

   Animal* animal1 = &cat;
   Animal* animal2 = &dog;

   cat.makeSound();
   dog.makeSound();

}
