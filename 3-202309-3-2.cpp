#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n; // 输入整数n，表示需要判断的数的个数

    for (int i = 0; i < n; i++) {
        char str[11]; // 定义一个长度为11的字符数组，用来存储输入的字符串
        cin >> str; // 输入需要判断的字符串

        char max = '0'; // 初始化最大字符为'0'

        // 遍历字符串，找到最大的字符
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] > max) {
                max = str[i];
            }
        }

        // 判断最大字符对应的进制特点，输出结果
        cout << (max <= '1') << " " << (max <= '7') << " " << (max <= '9') << " " << (max <= 'F') << endl;
    }

    return 0;
}
