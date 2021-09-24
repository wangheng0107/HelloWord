#include <iostream>

using namespace std;
/**
 * 案例描述：请声明一个5个元素的数组，并且将元素逆置.
(如原数组元素为：1,3,2,5,4;逆置后输出结果为:4,5,2,3,1);
 * @return
 */
int mainni() {
    int arr[] = {100, 350, 200, 400, 250};
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    while (start < end) {
        int item = arr[start];
        arr[start] = arr[end];
        arr[end] = item;
        start++;
        end--;
    }

    for (int i: arr) {
        cout << i << endl;
    }


    return 0;
}
