#include <iostream>

using namespace std;

/**
 * 九九乘法表
 * @return
 */
int mainppp() {
    //嵌套循环
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " * " << i << " = " << j * i << "  ";
        }
        cout << endl;
    }
    return 0;
}