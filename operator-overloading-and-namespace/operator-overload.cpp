#include <iostream>

namespace learn{
    struct Cat{
        int eyes;
    };

    Cat operator+(Cat a, Cat b){
        a.eyes += b.eyes;
        return (a);
    }
}

int main(){
    learn::Cat lucy, lucas;

    lucy.eyes = 2;
    lucas.eyes = 1;

    std::cout << (lucy + lucas).eyes;

    return 0;
}