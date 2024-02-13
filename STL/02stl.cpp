/**
List (THEORY)

Lists are sequence containers that allow non-contiguous memory allocation.

As compared to the vector, the list has slow traversalbut once a position has been found,
insertion and deletion are quick (constant time).

std::list is the class of the List container. It is the part of C++ Standard Template Library (STL)
and is defined inside <list> header file.

syntax: std::list <data-type> name_of_list;

---------------Basic Operations on list-----------------------
front() – Returns the value of the first element in the list.
back() – Returns the value of the last element in the list.
push_front() – Adds a new element ‘g’ at the beginning of the list.
push_back() – Adds a new element ‘g’ at the end of the list.
pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
insert() – Inserts new elements in the list before the element at a specified position.
size() – Returns the number of elements in the list.
begin() – begin() function returns an iterator pointing to the first element of the list.
end() – end() function returns an iterator pointing to the theoretical last element which follows the last element.

---------------Points to Remember about List Container----------------
1.It is generally implemented using a dynamic doubly linked list with traversal in both directions.
2.Faster insert and delete operation as compared to arrays and vectors.
3.It provides only sequential access. Random Access to any middle element is not possible
4.It is defined as a template so it is able to hold any data type.
5.It operates as an unsorted list would, which implies that by default, the list’s order is not preserved. However, there are techniques for sorting.


Source : https://www.geeksforgeeks.org/list-cpp-stl/
**/
#include <iostream>
#include <iterator>
#include <list>
using namespace std;

// function for printing the elements in a list
void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{

    list<int> gqlist1, gqlist2;

    for (int i = 0; i < 10; ++i) {
        gqlist1.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }
    cout << "\nList 1 (gqlist1) is : ";
    showlist(gqlist1);

    cout << "\nList 2 (gqlist2) is : ";
    showlist(gqlist2);

    cout << "\ngqlist1.front() : " << gqlist1.front();
    cout << "\ngqlist1.back() : " << gqlist1.back();

    cout << "\ngqlist1.pop_front() : ";
    gqlist1.pop_front();
    showlist(gqlist1);

    cout << "\ngqlist2.pop_back() : ";
    gqlist2.pop_back();
    showlist(gqlist2);

    cout << "\ngqlist1.reverse() : ";
    gqlist1.reverse();
    showlist(gqlist1);

    cout << "\ngqlist2.sort(): ";
    gqlist2.sort();
    showlist(gqlist2);

    return 0;
}
