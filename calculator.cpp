#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

// 函数声明
vector<double> parseInput(const string& input);
double calculate(const vector<double>& numbers, char operation);

int main() {
    string input;
    char operation;
    
    // 提示用户输入
    cout << "请输入运算符 (+, -, *, /): ";
    cin >> operation;
    cin.ignore(); // 忽略换行符

    cout << "请输入数字，用空格分隔: ";
    getline(cin, input); // 获取整行输入

    // 解析用户输入
    vector<double> numbers = parseInput(input);

    // 检查输入是否有效
    if (numbers.empty()) {
        cout << "无效的输入。" << endl;
        return 1;
    }

    // 执行计算并输出结果
    double result = calculate(numbers, operation);
    cout << "结果: " << result << endl;

    return 0;
}

// 解析用户输入的数字
vector<double> parseInput(const string& input) {
    vector<double> numbers;
    stringstream ss(input);
    double number;

    while (ss >> number) {
        numbers.push_back(number);
    }

    return numbers;
}

