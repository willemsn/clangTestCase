#include <iostream>
#include <memory>
#include <vector>

int ub(int val)
{
    int var1;
    if(val) var1 = 102;
    return var1; 
}

int main(int argc, char *argv[])
{
    std::cout << "test?" << std::endl;
    
    ub(21);
    
    exit(EXIT_SUCCESS);
}

