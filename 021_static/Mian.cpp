#include <iostream>

extern int s_Variable;

void Func() {}

main()
{
    std::cout << s_Variable << std::endl;
}