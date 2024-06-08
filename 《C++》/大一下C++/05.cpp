#include <iostream>

using namespace std; // 使用 std 命名空间

class Palindrome {
private:
    int n; // 存储要检查的整数
    int y; // 标记是否为绝对回文数，1 表示是，0 表示不是
    int* binaryDigits; // 存储二进制数的各位数字
    int binarySize; // 存储二进制数的位数

public:
    // 构造函数，根据输入的整数n初始化数据成员
    Palindrome(int x) : n(x), y(0), binaryDigits(nullptr), binarySize(0) {}

    // 析构函数，释放动态分配的内存
    ~Palindrome() {
        delete[] binaryDigits;
    }
    
    bool isDecimalPalindrome(int num);
    void convertToBinary();
    bool isBinaryPalindrome();
    void huiwen();
    void show();

};

    // 判断整数是否为回文（十进制）
bool Palindrome::isDecimalPalindrome(int num) {
        int original = num;
        int reversed = 0;
        while (original > 0) {
            reversed = reversed * 10 + original % 10; // 反转数字
            original /= 10;
        }
        return num == reversed; // 比较原始数字和反转后的数字
    }

    // 将整数转换为二进制形式并存储在 binaryDigits 数组中
void Palindrome::convertToBinary() {
        int temp = n;
        binarySize = 0;
        while (temp > 0) {
            binarySize++; // 计算二进制位数
            temp /= 2;
        }
        binaryDigits = new int[binarySize]; // 动态分配存储二进制位的数组
        temp = n;
        for (int i = 0; i < binarySize; i++) {
            binaryDigits[i] = temp % 2; // 存储二进制位
            temp /= 2;
        }
    }

    // 判断二进制数是否为回文
bool Palindrome::isBinaryPalindrome() {
        int left = 0;
        int right = binarySize - 1;
        while (left < right) {
            if (binaryDigits[left] != binaryDigits[right]) {
                return false; // 如果对应的位不相等，则不是回文
            }
            left++;
            right--;
        }
        return true; // 如果所有对应位都相等，则是回文
    }

    // 判断整数是否为绝对回文数
void Palindrome::huiwen() {
        // 首先转换为二进制形式
        convertToBinary();
        // 然后判断十进制和二进制是否都是回文
        if (isDecimalPalindrome(n) && isBinaryPalindrome()) {
            y = 1; // 如果都是回文，则标记为1
        } else {
            y = 0; // 如果不是回文，则标记为0
        }
    }

    // 显示结果
void Palindrome::show() {
        // 先判断是否为绝对回文数
        huiwen();
        // 然后根据结果输出
        if (y == 1) {
            cout << n << " 是绝对回文数。" << endl;
        } else {
            cout << n << " 不是绝对回文数。" << endl;
        }
    }


int main() {
    int a;
    cout << "请输入一个整数：";
    cin >> a;
   
    Palindrome p(a);
    p.show();
    return 0;
}