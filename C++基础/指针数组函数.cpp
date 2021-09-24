#include <iostream>
#include "../pointh/max1.h"

using namespace std;

void sort(int *arr, int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int item = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = item;
            }
        }
    }
}

int main_0() {
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    //arr就是数组的首地址
    sort(arr, len);

    for (int r: arr) {
        cout << r << endl;
    }
    return 0;
}