#include <iostream>
using namespace std;

int jar[1000]; // 定义一个长度为1000的数组，用来记录每位同学的到达情况

int main() {
    int n = 0, d = 0;
    cin >> n >> d; // 输入班级人数n和报出编号次数d

    // 初始化数组，表示所有同学都未到达
    for (int i = 0; i < n; i++)
        jar[i] = 0;

    // 遍历报出的编号，更新到达情况
    for (int i = 1; i <= d; i++) {
        int a = 0;
        cin >> a;
        jar[a] += i; // 如果同学a报出了编号，将其到达情况标记为i
    }

    // 输出未到达的同学编号
    cout << jar[0]; // 输出第一个同学的到达情况
    for (int i = 1; i < n; i++)
        cout << " " << jar[i]; // 依次输出其他同学的到达情况
    cout << endl;

    return 0;
}
