#include <iostream>

int num;

int &fun()
{
    return num;
}

int main()
{
    fun() = 5;
    std::cout << num;
    return 0;
}