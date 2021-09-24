#include <iostream>

using namespace std;
/**
 * 案例描述：系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，
 * 如果猜对恭喜玩家胜利，并且退出游戏。
 */
int num;
int value;

int mainNum() {
    srand((unsigned int) time(NULL));
    num = rand() % 100 + 1;
    while (true) {
        cin >> value;
        if (value == num) {
            cout << "恭喜猜对了！！！" << endl;
            break;
        } else if (value > num) {
            cout << "猜大了" << endl;
        } else {
            cout << "猜小了" << endl;
        }
    }

    return 0;
}