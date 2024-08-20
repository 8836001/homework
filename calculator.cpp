#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;
    double result;

    // 提示用户输入第一个数字
    cout << "请输入第一个数字: ";
    cin >> num1;

    // 提示用户输入运算符
    cout << "请输入运算符 (+, -, *, /): ";
    cin >> op;

    // 提示用户输入第二个数字
    cout << "请输入第二个数字: ";
    cin >> num2;

    // 根据运算符进行计算
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // 检查除数是否为零
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "错误: 除数不能为零" << endl;
                return 1;
            }
            break;
        default:
            cout << "错误: 不支持的运算符" << endl;
            return 1;
    }

    // 输出结果
    cout << "结果: " << result << endl;

    return 0;
}
