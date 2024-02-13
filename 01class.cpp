/**
@Author : Mathi Yuvarajan T.K
Date : Feb 10
*/

#include<iostream>
using namespace std;

class Car{

   // Declared the member variables for the class car
   public:
     int door;
     int seats;
     string color;
     string brand;
     int year;

     void reSellingValue(int currentYear){

          if((currentYear-year)<=2){
             cout<<"The Value is reduced by 40%";
          }else if((currentYear-year)<=6){
           cout<<"The Value is reduced by 60%";
          }else{
            cout<<"The Value is decided dynamically on the year of pruchase";
          }
     }
     // constructor
     Car(int door,int seats,string brand,int year){
            this->seats = seats;
            this->brand = brand;
            this->year = year;
     }
     // destructor
     ~Car(){
            cout<<"The Object is Destroyed";
     }
};
int main(){
     Car Baleno(4,4,"Maruthi Suzuki",2017);
     cout<<Baleno.door<<" \n";
     cout<<Baleno.brand<<" \n";
     cout<<Baleno.color<<" \n";
     cout<<Baleno.year<<" \n";
     Baleno.reSellingValue(2023);
     cout<<"\n";
}
