#include<iostream>

using namespace std;
// Function Templates with multiple arguments
template <typename FIRST, typename SECOND>
FIRST add(FIRST a , SECOND b){
     return a + b;
}

int main(){
     double a = 5.5;
     int b =7;
     cout<<add(a,b)<<endl;
     return 0;
}
