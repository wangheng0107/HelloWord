#include <iostream>

using namespace std;
/**
 * 最常用的排序算法，对数组内元素进行排序

比较相邻的元素。如果第一个比第二个大，就交换他们两个。
对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
重复以上的步骤，每次比较次数-1，直到不需要比较
 * @return
 */
int main_maopao() {
    int arr[] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    //外层排序是轮数
    for (int i = 0; i < end; ++i) {
        //内层排序是交换的次数
        for (int j = 0; j < end-i; ++j) {
            if (arr[j]>arr[j+1]){
                int item = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = item;
            }
        }
    }
    for (int i: arr) {
        cout << i << endl;
    }


    return 0;
}
