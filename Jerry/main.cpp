#include <iostream>
#include <iomanip>
#include <ctime>
#include <fstream>
#include "init.hpp"
#include "print.hpp"
using namespace std;
int main()
{
        char shuzu[SIZE];
        init_array_rand(shuzu,SIZE);
        print_binary_file(shuzu,SIZE);
        print_array_to_file(shuzu,SIZE);
        return 0;
}

