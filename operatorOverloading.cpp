// Operator Overloading Concept
#include<iostream>
#include<string>
#include<list>
using namespace std;

struct YoutubeChannel{
   string Name;
   int SubscribersCount;

   YoutubeChannel(string name,int SubscribersCount){
      Name = name;
      SubscribersCount = SubscribersCount;
   }

};
// it is passed by reference.
ostream& operator<<(ostream& COUT , YoutubeChannel& ytChannel){

struct MyCollection{
    List<YoutubeChannel> myChannels;

    void operator+=(YoutubeChannel& channel){
      this->myChannel.push_back(channel);
    }
}
    COUT<<"Name: "<<ytChannel.Name<<endl;
    COUT<<"Subscribers :"<<ytChannel.SubscribersCount<<endl;

    return COUT;
}
int main(){

    YoutubeChannel yt1 = YoutubeChannel("Mathi Yuvarajan",21);
    YoutubeChannel yt2 = YoutubeChannel("My Second YT Channel",90000);

    MyCollection myCollection;
    myCollection += yt1;
    // cout << yt1 <<yt2;
    //operator<<(cout,yt1);

    // it does not know how insertion operator to work with cout and yt1. it dont know to print
    // userdefined dataType.
    // rule for naming.
    // operatorVariableName(operator symbol);

    // we can invoke operator function like regular function.

}
