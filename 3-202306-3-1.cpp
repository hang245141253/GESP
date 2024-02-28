#include <iostream>
using namespace std;

int main() {
    // 输入班级同学数量和报出编号的次数
    int N, M;
    cin >> N >> M;

    // 使用数组标记同学是否已到达，初始值全部设为0表示未到达
    int arrived[N] = {0};

    // 处理每次报出的编号
    for (int i = 0; i < M; ++i) {
        int student;
        cin >> student;
        arrived[student] = 1;  // 标记报出编号的同学已到达
    }

    int notArrivedCount = 0;

    // 遍历同学，找出未到达的同学并输出
    for (int i = 0; i < N; ++i) {
        if (!arrived[i]) {
            // 输出空格分隔
            if (notArrivedCount > 0) {
                cout << " ";
            }
            cout << i;  // 输出未到达同学的编号
            notArrivedCount++;
        }
    }

    // 如果没有同学未到达，输出班级总人数
    if (notArrivedCount == 0) {
        cout << N;
    }

    cout << endl;

    return 0;
}
