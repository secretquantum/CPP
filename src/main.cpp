#include <iostream>
#include "functions.h"
#include <cstring>


using namespace std;
#define LOG(x) std::cout << x << std::endl;

int main() {

    cout << "Hello world" << '\n';
    cout << "Function MathTest: ";
    mathTest(3 , 8);
    cout << '\n';

    
    int var = 8; // allocating memory on the stack
    int* ptr = &var;
    *ptr = 10;
    LOG(var);
    cout << ptr << '\n';

    char* buffer = new char[8];
    memset(buffer, 1, 8);
    delete[] buffer;

    return 0;
}