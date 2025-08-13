#include <iostream>

int main(){
    int a = 45;
    int* p = &a;    // stores just address of a
    int& r = a;     // r is a

    r = 35; // changes a
    std::cout << a << '\n';

    a = 9; 
    std::cout << r << '\n'; // r is a

    return 0;
}