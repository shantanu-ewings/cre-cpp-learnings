#include <iostream>
#include <memory>

int main(){
    std::unique_ptr<int> p1 = std::make_unique<int>(5); // declaration of Unique Pointer 
    auto p2 = std::make_unique<int>(2);  // same as above

    // p1 = p2
    p1 = std::move(p2);
    std::cout << " p1: " << *p1 << ",\n p2: " << *p2 << '\n'; // printing p1 and p2
    return 0;
}