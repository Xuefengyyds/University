#include <iostream>
#include <cstring>

class CString {
private:
    char *str; // 原始字符串
    char *str1; // 目标关键字
    char *str2; // 替换关键字
    int flag; // 标记替换是否完成替换

public:
    CString(char *s, char s1[], char *s2); // 构造函数
    ~CString();
    void Replace();
    void Show();
};

// 构造函数
CString::CString(char *s, char s1[], char *s2) {
        str = new char[strlen(s) + 1]; // 分配内存给原始字符串
        strcpy(str, s); // 拷贝原始字符串内容
        str1 = new char[strlen(s1) + 1]; // 分配内存给目标关键字
        strcpy(str1, s1); // 拷贝目标关键字内容
        str2 = new char[strlen(s2) + 1]; // 分配内存给替换关键字
        strcpy(str2, s2); // 拷贝替换关键字内容
        flag = 0; // 初始化标记为0，表示未替换
    }

    // 析构函数
CString::~CString() {
        delete[] str; // 释放原始字符串内存
        delete[] str1; // 释放目标关键字内存
        delete[] str2; // 释放替换关键字内存
    }

    // 替换函数
void CString::Replace() {
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int strLen = strlen(str);
        char *p = str;
        while ((p = strstr(p, str1)) != NULL) {
            for (int i = 0; i < len1; ++i) {
                *p = *(str2 + i); // 执行替换操作
                ++p;
            }
            flag = 1; // 标记替换成功
        }
    }

    // 显示函数
void CString::Show() {
        if (flag) {
            std::cout << "目标关键字: " << str1 << std::endl;
            std::cout << "替换关键字: " << str2 << std::endl;
            std::cout << "替换后的字符串: " << str << std::endl;
        } else {
            std::cout << "原始字符串: " << str << std::endl;
        }
    }

int main() {
    // 定义原始字符串、目标关键字和替换关键字
    char s[] = "I am a student, you are student too, we are all student.";
    char s1[] = "student";
    char s2[] = "teacher";

    // 创建CString对象并进行测试
    CString test(s, s1, s2);
    test.Replace();
    test.Show();

    return 0;
}
