#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    queue<int> q;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    // 한 명만 남을 때까지 반복
    while (q.size() > 1) {
        // 1) 맨 앞 제거
        q.pop();
        // 2) 그다음 맨 앞을 맨 뒤로 이동
        int x = q.front();
        q.pop();
        q.push(x);
    }

    // 마지막에 남은 사람 번호 출력
    cout << q.front() << "\n";
    return 0;
}
