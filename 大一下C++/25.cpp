#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class NUM {
private:
    int data[25]; // 存储随机生成的数字序列
    int num[10]; // 存储每个数字出现的次数

public:
    // 构造函数
    NUM();

    // 统计数字出现的次数
    void count();

    // 输出数字序列
    void printData();

    // 显示每个数字及其出现的次数
    void show();
};

// 构造函数定义
NUM::NUM() {
    // 初始化数字出现次数数组为0
    for (int i = 0; i < 10; ++i) {
        num[i] = 0;
    }

    // 设置随机数种子
    srand(time(0));

    // 随机生成数字序列
    for (int i = 0; i < 25; ++i) {
        data[i] = rand() % 10; // 生成0到9之间的随机数字
    }
}

// 统计数字出现的次数
void NUM::count() {
    // 遍历数字序列，统计每个数字出现的次数
    for (int i = 0; i < 25; ++i) {
        num[data[i]]++;
    }
}

// 输出数字序列
void NUM::printData() {
    cout << "随机生成的数字序列：";
    for (int i = 0; i < 25; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;
}

// 显示每个数字及其出现的次数
void NUM::show() {
    // 输出每个数字及其出现次数
    cout << "数字出现次数统计：" << endl;
    for (int i = 0; i < 10; ++i) {
        if (num[i] > 0) {
            cout << "数字 " << i << " 出现了 " << num[i] << " 次。" << endl;
        }
    }
}

int main() {
    // 创建NUM类对象
    NUM num;

    // 统计数字出现的次数
    num.count();

    // 输出数字序列
    num.printData();
    // 显示结果
    num.show();

    return 0;
}
