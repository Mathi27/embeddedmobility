#include<iostream>

using namespace std;

class YoutubeChannel {
 private :
   string name;
   string ownerName;
   int SubscriberCount;

 public :
   YoutubeChannel(string name,string ownerName){
     this->name = name;
     this->ownerName = ownerName;
   }

   void GetInfo(){}
   void Subscribe(){}
   void Unsubscribe(){}
   void PublishVideo(string title){}

};

int main(){

}

