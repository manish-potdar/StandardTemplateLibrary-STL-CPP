// TOPIC : std::map

// SYNTAX : std::map<T1, T2> objectName; // where T1 is key and T2 is value type.

// NOTES :
// 1. std::map is associative container that store elements in key value combination
//    where key should be unique, otherwise it overrides the previous value.
// 2. It is implemented using Self-Balancing Binary Tree (AVL/Red-Black Tree).
// 3. It store key value pair in sorted order on the basis of key (Ascending / Descending).
// 4. std::map is generally used in Dictionary type problems.

#include <iostream>
#include <map>
#include <functional>
#include <vector>
using namespace std;

int main(){
    std::map<string, long long> Map;
    Map["Chotu"] = 9090909090;
    Map["Manish"] = 8999137827;
    Map.insert(std::make_pair("Bot", 1234567899));
    
    // Loop through map
    for (auto &e1:Map){
        cout << e1.first << " " << e1.second << endl;
    }

    // Access using [] operator
    cout << Map["Manish"] << endl;

    return 0;
}