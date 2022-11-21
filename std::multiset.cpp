// TOPIC : std::multiset<T>

// SYNTAX : std::multiset<T> objectName;

// NOTES:
// 1. std::multiset is an Associative Container that contains a sorted set of duplicate objects of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logarithmic complexity.
// 4. If we want to store user defined data type in multiset then we will have to provide
//    compare function so that multiset can store them in sorted order.
// 5. We can pass the order of sorting while constructing multiset object.

// 6. Multiset is similar to set except it can have multiple elements with same value.


#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;

// Example : User Defined Type

class Person{
    public:
        float age;
        string name;
    bool operator < (const Person& rhs) const { return age < rhs.age; }
    bool operator > (const Person& rhs) const { return age > rhs.age; }
};

int main(){
    
    std::multiset<int, std::greater<>> multiset = {5,2,4,3,2,5};
    for (const auto &e : multiset){
        cout << e << endl;
    }

    return 0;
}