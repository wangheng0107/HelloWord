#include <iostream>

using namespace std;

int main_() {

    cout << "1" << endl;
    //知道存在，阅读不好，不推荐使用
    goto FLAG;

    cout << "2" << endl;
    cout << "3" << endl;

    FLAG:
    cout << "4" << endl;
    cout << "5" << endl;

    return 0;
}