#include <iostream>

using namespace std;

int mainzhizhen() {
    //指针就是地址
    int a = 10;
    int b = 20;
//    int *p = &a;
    //常量指针重点在常量，不改值，可以改变指针方向，但是不可以改值
//    const int *p = &a;
//    p = &b;
    //指针常量重点在指针，指针(指向)不可以改方向，可以改变指针指向的值，但是不可以改变指针指向
    int *const p = &a;
    *p = b;

    cout << p << endl;
    cout << *p << endl;


    return 0;
}