#include <iostream>
#include "../pointh/swap.h"

using namespace std;

int main_hanshuzhizhen() {
    int a = 10;
    int b = 20;
    swap1(&a, &b); // 值传递不会改变实参，地址传递会改变实参
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}