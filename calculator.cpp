#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

// ��������
vector<double> parseInput(const string& input);
double calculate(const vector<double>& numbers, char operation);

int main() {
    string input;
    char operation;
    
    // ��ʾ�û�����
    cout << "����������� (+, -, *, /): ";
    cin >> operation;
    cin.ignore(); // ���Ի��з�

    cout << "���������֣��ÿո�ָ�: ";
    getline(cin, input); // ��ȡ��������

    // �����û�����
    vector<double> numbers = parseInput(input);

    // ��������Ƿ���Ч
    if (numbers.empty()) {
        cout << "��Ч�����롣" << endl;
        return 1;
    }

    // ִ�м��㲢������
    double result = calculate(numbers, operation);
    cout << "���: " << result << endl;

    return 0;
}

// �����û����������
vector<double> parseInput(const string& input) {
    vector<double> numbers;
    stringstream ss(input);
    double number;

    while (ss >> number) {
        numbers.push_back(number);
    }

    return numbers;
}

