#include <iostream>

// [NAMESPACE] = Provides a solution for preventing name 
//               conflicts in large projects. Each entity 
//               needs a unique name.
//               A namespace allows for identically named 
//              entities as long as the namespaces are 
//              different.

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    // importando: using namespace first/second
    // std::cout << x << '\n';

    using std::string;

    int x = 0;

    string line = "----------------------------------";

    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    std::cout << line << '\n';
    std::cout << first::x + second::x << '\n';

    return 0;
}