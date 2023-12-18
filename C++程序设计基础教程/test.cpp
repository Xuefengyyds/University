#include <iostream>
using namespace std;

class Factorial {
private:
    int n;
    long long result;

public:
    void setN(int num) {
        n = num;
    }

    void calculateFactorial() {
        result = 1;
        for (int i = 1; i <= n; ++i) {
            result *= i;
        }
    }

    void displayResult() {
        cout << n << "! = " << result << endl;
    }
};

int main() {
    Factorial fact;
    int inputN;

    cout << "请输入一个整数 n 以计算 n!：";
    cin >> inputN;

    fact.setN(inputN);
    fact.calculateFactorial();
    fact.displayResult();

    return 0;
}
