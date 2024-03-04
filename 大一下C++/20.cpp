#include <iostream>

using namespace std;

class Array {
private:
    int a[4][4]; // 私有数据成员，用于存放4x4方阵

public:
    Array(int a1[][4]);
    void xuanzhuan();
    void show();
    ~Array(){}

};

    // 构造函数，接受一个4x4的整数数组作为参数，并用它初始化方阵a
Array::Array(int a1[][4]) {
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                a[i][j] = a1[i][j]; // 复制数组元素到方阵a
            }
        }
    }

    // 逆时针旋转方阵90度的成员函数
void Array::xuanzhuan() {
        int temp[4][4]; // 创建一个临时数组temp用于存储旋转后的方阵

        // 将方阵a的元素逆时针旋转90度后存储到temp中
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                temp[i][j] = a[j][3 - i]; // 逆时针旋转90度的索引计算
            }
        }

        // 将temp的内容复制回方阵a，完成旋转
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                a[i][j] = temp[i][j];
            }
        }
    }

    // 显示方阵元素的成员函数
void Array::show() {
        // 遍历并打印方阵a的每个元素
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                cout << a[i][j] << " ";
            }
            cout << endl; // 每打印完一行后换行
        }
    }

int main() {
    // 定义并初始化一个4x4的整数数组b
    int b[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // 创建Array类的对象test，并用数组b初始化
    Array test(b);

    // 输出原始方阵
    cout << "原始方阵:" << endl;
    test.show();

    // 对方阵进行逆时针90度旋转
    test.xuanzhuan();

    // 输出旋转后的方阵
    cout << "逆时针90度旋转后的方阵:" << endl;
    test.show();

    return 0;
}