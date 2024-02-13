/**
The STL stack provides the functionality of a stack data structure in C++.

The stack data structure follows the LIFO (Last In First Out) principle.
That is, the element added last will be removed first.


push()	adds an element into the stack
pop()	removes an element from the stack
top()	returns the element at the top of the stack
size()	returns the number of elements in the stack
empty()	returns true if the stack is empty

Optional info:

Time complexity
The space complexity of all the stack methods is generally constant where time complexities are

push : A push_back call is made to the underlying container.
For vector, time complexity will be amortized (O(n)).
For list, time complexity will be constant.
For deque, time complexity will be constant.
pop : A pop_back call is made to the underlying container. The time complexity for pop_back on any of the three types of containers we had discussed is constant.
top : constant.
size : constant.
empty : constant.

source :https://www.scaler.com/topics/cpp/stack-in-cpp/
Also Refer : https://www.codingninjas.com/studio/library/stack-in-c-stl
**/
#include "iostream"
#include "stack"
#include "list"

using namespace std;

int main() {

    stack<char, list<char>>st;
    // Or: stack<char, vector<int>>st;

    // PUSH
    cout << "Pushing a and b into the stack" << endl;
    st.push('a');
    st.push('b');

    // TOP
    cout << "The top element is: " << st.top() << endl;

    // POP
    cout << "Popping an element" << endl;
    st.pop();
    cout << "The top element is: " << st.top() << endl;

    // EMPTY
    cout << "Checking if the stack is empty: ";

    cout << st.empty() << endl;

    // SIZE
    cout << "Size of the stack: " << st.size() << endl;

    cout << "Popping another element" << endl;
    st.pop();

    cout << "Size of the stack: " << st.size() << endl;
    cout << "Checking if the stack is empty: ";
    cout << st.empty() << endl;
    return 0;
}
