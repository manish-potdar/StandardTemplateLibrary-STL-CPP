// TOPIC : std::set

// SYNTAX : std::set<T> objName;

// NOTES:
// 1. It is an Associative Container that contains a sorted set of unique objects of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logarithmic complexity.
// 4. If we want to store user defined data type in set then we will have to provide
//    compare function so that set can store them in sorted order.
// 5. We can pass the order of sorting while constructing set object.

// 6. It stores unique elements and they are stored in sorted order 
//    Ascending : set<T, std::less<>> // Default.
//    Descending: set<T, std::greater<>> 

#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;

class Person{
    public:
        float age;
        string name;
    bool operator < (const Person& rhs) const { return age < rhs.age; }
    bool operator > (const Person& rhs) const { return age > rhs.age; }

};

int main(){
    set<int, std::greater<>> Set = {1,2,3,4,5,1,2,3,4,5};
    for (const auto& e: Set){
        cout << e << " ";
    }
    cout << endl;
    set<Person, std::greater<>> Set2 = {{30, "John"}, {25, "Karan"}, {21, "Manish"}, {21, "Manish"}};
    for (const auto& e: Set2){
        cout << e.name << " " << e.age << endl;
    }
    return 0;
}