#include <iostream>

using namespace std;

/**
 * 案例描述：水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身

例如：1^3 + 5^3+ 3^3 = 153

请利用do...while语句，求出所有3位数中的水仙花数
 * @return
 */
int main_2() {
    int num = 100;
    int a = 0;
    int b = 0;
    int c = 0;
    //do和while的区别是先执行一次代码在判断
    do {
        a = num % 10;
        b = num / 10 % 10;
        c = num / 100;

        if (a * a * a + b * b * b + c * c * c == num) {
            cout << "s = " << num << endl;
        }
        num++;
    } while (num < 1000);

    return 0;
}