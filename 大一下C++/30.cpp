#include <iostream>
using namespace std;

class Array {
private:
    int x[4][4]; // 二维数组
    int count; // 素数计数

    
public:
    // 构造函数
    Array(int arr[][4]);
    // 在类内部声明成员函数
    void encode();
    void print();
    int fun(int n); // 判断一个数是否为素数

};

// 类外部实现成员函数

Array::Array(int arr[][4]) {
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                x[i][j] = arr[i][j];
            }
        }
        count = 0;
        
    }

void Array::encode() {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (fun(x[i][j])) {
                // 找到大于当前素数的最小素数
                int minPrime = x[i][j] + 1;
                while (!fun(minPrime)) ++minPrime;
                x[i][j] = minPrime;
                count++;
            }
        }
    }
}

void Array::print() {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
    cout << "素数个数: " << count << endl;
}

// 类外部实现fun函数
int Array::fun(int n) {
    if (n <= 1) return 0; // 非素数
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return 0; // 非素数
    }
    return 1; // 素数
}

int main() {
    // 测试数据
    int test[4][4] = {
        {3, 6, 4, 17},
        {8, 5, 9, 10},
        {12, 19, 7, 20},
        {4, 14, 21, 23}
    };

    // 创建Array对象并输出矩阵
    Array A(test);
    
    cout << "原始矩阵：" << endl;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << test[i][j] << " ";
        }
        cout << endl;
    }

    cout<<endl;

    A.encode();
    cout<<"变换后矩阵"<<endl;
     A.print();

    return 0;
}
