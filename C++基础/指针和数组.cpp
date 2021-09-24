#include <iostream>

using namespace std;

int main_hanshu() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p = arr;  //指向数组的指针
    for (int i = 0; i < 10; ++i) {
        cout << *p << endl;
        p++;
    }

    cout << sizeof(int *) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << p << endl;
    p++;
    cout << *p << endl;
    return 0;
}