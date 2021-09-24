#include <iostream>

using namespace std;

/**
 * 案例描述：从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。
 * @return
 */
int main_3() {

    for (int i = 0; i < 100; ++i) {
        if ((i % 7 == 0) || (i % 10 == 7) || (i / 10 == 7)) {
            cout << "敲桌子" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}