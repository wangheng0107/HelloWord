#include <iostream>

using namespace std;

/**
 * 在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};
找出并打印最重的小猪体重。
 * @return
 */
int mainzhu() {
    int arr[] = {300, 350, 200, 400, 250};
    int max = 0;
    for (int i = 0; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    cout << max << endl;


    return 0;
}
