// TOPIC: std::vector

// SYNTAX: std::vector<T> vectorN;

// NOTES:
// 1. std::vector is a sequence container and also known as Dynamic array or Array list.
// 2. Its size can grow and shrink dynamically, and no need to provide at compile time.

// ELEMENT ACCESS:
// at(), [], front(), back(), data()

// MODIFIERS:
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()

// When there is no size in array for more elements vector creates double size of existing
// size and copy all the previous elements of that array in new and then adds a new element

#include <iostream>
#include <vector>
using namespace std;
#define pb push_back

int main(){

    // Declaration
    std::vector<int> arr1;
    std::vector<int> arr2 {3, 4}; // uniform initialization
    std::vector<int> arr3 = {1,2, 3,4,4,5}; // initializer list


    // Accessing Elements
    arr2[1] = 10;
    arr2.at(0) = 10;
    

    vector<int> vec;
    vec.reserve(31); // to allocate size initially to be free from dynamically
    // more allocation of memory
    // cout << vec.size() << "->" << vec.capacity() <<endl;
    for (int i = 0; i < 32; i++){
        vec.pb(i);
        cout << vec.size() << "->" << vec.capacity() << endl;
    }

}
