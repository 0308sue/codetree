#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    queue<int> q;
    // 1부터 N까지 큐에 넣기
    for(int i = 1; i <= N; i++) {
        q.push(i);
    }

    vector<int> answer;
    answer.reserve(N);

    // 큐에 한 명만 남을 때까지 반복
    while(!q.empty()) {
        // 맨 앞에서 K-1명은 뒤로 보낸다
        for(int i = 1; i < K; i++) {
            q.push(q.front());
            q.pop();
        }
        // 이제 맨 앞이 K번째 사람이므로 제거하고 기록
        answer.push_back(q.front());
        q.pop();
    }

    // 결과 출력
    // 예: <3, 6, 2, 7, 5, 1, 4> 같은 형식으로
    for(int i = 0; i < (int)answer.size(); i++) {
        cout << answer[i];
        if (i + 1 < (int)answer.size()) 
            cout << " ";
    }

    return 0;
}
