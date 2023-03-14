#include <iostream>
#include "unindent.h"
#include "indent.h"

int main()
{
    //TASK A
    std::cout << unindent_file("bad-code.cpp") << std::endl;

    std::cout << "__________________________________________\n";
    //TASK B
    std::cout << indent("bad-code.cpp") << std::endl;


    return 0;
}