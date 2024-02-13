#include<iostream>
#include<vector>
using namespace std;

int main(){
  // declare vector of int
  vector<int> vec;
  vec.push_back(10);
  vec.push_back(20);
  vec.push_back(30);

  cout<<"Elements in vector";
  for(int i=0;i<vec.size();i++){
      cout<<vec[i]<< " ";
  }
  cout<<endl;

  // modify it
  vec[1]= 34;

  cout<<"Elements in vector using iterators";
  for(auto it = vec.begin();it != vec.end();it++){
       cout<<*it<<" ";
  }
  cout<<endl;

  //remove an element from the end of the vector;

  vec.pop_back();

  cout<<"Size of the vector"<<vec.size()<<endl;
  cout<<"Capacity of vector"<<vec.capacity()<<endl;

  vec.clear();

  //check if vector is empty
  cout<<"Vector is empty "<<endl;

  return 0;
}
