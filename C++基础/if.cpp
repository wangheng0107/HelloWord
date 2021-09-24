#include <iostream>

using namespace std;

int mainif() {
    int score;
    cout << "输入一个考试分数： " << endl;
    cin >> score;
    if (score>600){
        if (score>700){
            cout << "恭喜，考上了清华！" << endl;
        } else{
            cout << "恭喜，考上了一本" << endl;
        }

    } else if (score > 500 ){
        cout << "考上了本科" << endl;
    } else{
        cout << "还需要再接再厉。。。" << endl;
    }
    return 0;
}