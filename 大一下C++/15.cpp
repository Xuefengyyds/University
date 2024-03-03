#include <iostream>
using namespace std;

class Carray {
private:
    int *a; // 指针a指向一个动态分配的原始数组
    int n; // 表示该数组的大小
    int b; // 线性变换的常量

public:
    // 构造函数，用给定的参数a、n和x初始化数据成员a、n和b
    Carray(int a[], int n, int x = 0) : n(n), b(x) {
        this->a = new int[n];
        for (int i = 0; i < n; ++i) {
            this->a[i] = a[i];
        }
    }

    // 根据线性变换算法进行数组变换
    void Transform() {
        for (int i = 0; i < n; ++i) {
            a[i] = b * a[i] + i;
        }
    }

    // 在屏幕上显示数组元素
    void Show() {
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    // 析构函数，释放动态分配的空间
    ~Carray() {
        delete[] a;
    }
};

int main() {
    using namespace std;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b;
    
    cout << "输入线性变换常量 (b)：";
    cin >> b;

    // 使用arr初始化Carray类对象test，并进行测试
    Carray test(arr, 10, b);
    test.Transform();
    test.Show();

    return 0;
}
