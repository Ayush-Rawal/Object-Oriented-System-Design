#include<iostream>

class test {
    int a;
    
    public:
        void setNum(int x);
        friend void printNum(test);
        friend void printNum();
        void show() {
            std::cout<<a<<std::endl;
        }
};

void test::setNum(int val) {
    a = val;
    return;
}

/* void printNum(test obj) {
    std::cout<<"Value is " << obj.a<<std::endl;
    return;
}

void printNum() {
    int num;
    test obj;
    std::cout<<"Enter value ";
    std::cin>>num;
    obj.setNum(num);
    std::cout<<"Value is " << obj.a<<std::endl;
    return;
} */

void printNum(test obj1) {
    obj1.a = 200;
    std::cout<<obj1.a;
}

int main() {
    test obj;
    obj.setNum(40);
    printNum(obj);
    obj.show();
    return 0;
}