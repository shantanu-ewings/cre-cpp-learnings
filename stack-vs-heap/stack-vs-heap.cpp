#include<iostream>

int main(){
    int a = 10; // stack :- fast memory, but small
    int* b = new int(10); // heap memory, little slower, but offers huge storage.

    std::cout << " addr a: " << &a << "\n addr b: " << b;
        
    delete b; // needs to be deleted
    // a gets deleted automatically at end of function
    // we cannot delete a manually, its compiler managed

    return 0;
}

// Its bad practice to not delete :- The memory lives in Heap foreever.
// But most modern OS, reclaims all memory used by program after execution