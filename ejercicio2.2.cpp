#include <queue>

void SeparateRequests(
    std::queue<int>& requests,
    std::queue<int>& priority) {

    int size = requests.size();

    for (int i = 0; i < size; i++) {
        int value = requests.front();
        requests.pop();

        if (value % 3 == 0) {
            priority.push(value);
        } else {
            requests.push(value);
        }
    }
}