#include <iostream>

using namespace std;

//加减乘除，逻辑，赋值，比较
//数组是同一类型，连续的内存空间，计算长度是集合的字节长度/单个字节长度
int main_shuzu() {
    int score[] = {1,2,3,5,6};
    int arr[2][3] = {{4, 2, 8}, {0, 5, 7}};
//    cout <<sizeof(score)<< endl;
//    cout <<sizeof(score[0])<< endl;
    cout <<arr<< endl;
    cout <<arr[0]<< endl;
    cout <<&arr[0][0]<< endl;


    return 0;
}
