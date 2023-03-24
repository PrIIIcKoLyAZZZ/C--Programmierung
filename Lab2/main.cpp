#include <iostream>
#include "FileHandler.h"

int main(int argc, char** argv)
{
    std::string str = argv[1];
    FileHandler FileHandler(argv[1]);
    std::cout << FileHandler.getWord() << '\n';
    std::cout << FileHandler.getString();
    return 0;
}
