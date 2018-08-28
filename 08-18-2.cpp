#include <iostream>

void swapByPointer(int *num1, int *num2)
{
    int num;
    num = *num1;
    *num1 = *num2;
    *num2 = num;
}

void swapByReferance(int &num1, int &num2)
{
    int num;
    num = num1;
    num1 = num2;
    num2 = num;
}

void swapByValue(int num1, int num2)
{
    int num;
    num = num1;
    num1 = num2;
    num2 = num;
}

int main()
{
    int a = 20, b = 80;
    std::cout << std::endl
              << "Swapping by Value" << std::endl;
    swapByValue(a, b);
    std::cout << std::endl
              << "Swapping by Referance" << std::endl;
    swapByReferance(a, b);
    std::cout << std::endl
              << "Swapping by Pointer" << std::endl;
    swapByPointer(&a, &b);

    return 0;
}
