/**
@Author : Mathi Yuvarajan T.K
Date : Feb 10
Encapsulation Demo.
*/

#include<iostream>
using namespace std;

class Car{

   // Declared the member variables for the class car
   private:
     int door;
     int seats;
     string color;
     string brand;
     int year;

   //
   public:
   // setters & getters
     void setDoor(int door){
      this->door = door;
     }
     int getDoor(){
        return door;
     }

     void setSeats(int seats){
       this->seats = seats;
     }
     int getSeats(){
     return seats;
     }

     void setColor(string color){
        this->color = color;
     }
     string getColor(){
        return color;
     }

     void setBrand(string brand){
        this->brand = brand;
     }
     string getBrand(){
       return brand;
     }

     void reSellingValue(int currentYear){

          if((currentYear-year)<=2){
             cout<<"The Value is reduced by 40%";
          }else if((currentYear-year)<=6){
           cout<<"The Value is reduced by 60%";
          }else{
            cout<<"The Value is decided dynamically on the year of pruchase";
          }
     }
     Car(){

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

    Car c1;
    c1.setDoor(4);
    c1.setSeats(4);
    c1.setColor("Red");
    c1.setBrand("Maruthi Suzuki");
    int door_res = c1.getDoor();
    int seat_res = c1.getSeats();
    string color_res = c1.getColor();
    string brand_res = c1.getBrand();
    cout<<"No of Doors Present:"<<door_res<<"\n";
    cout<<"No of Seats Present:"<<seat_res<<"\n";
    cout<<"Car Color :"<<color_res<<"\n";
    cout<<"Car Brand :"<<brand_res<<"\n";

}
