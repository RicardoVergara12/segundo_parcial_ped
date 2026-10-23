#include <stack>

void RemoveConsecutiveDuplicates(std::stack<int>& values) {
    if (values.empty()) {
        return;
    }

    std::stack<int> aux;
    int last = values.top();

    aux.push(last);
    values.pop();

    while (!values.empty()) {
        if (values.top() != last) {
            last = values.top();
            aux.push(last);
        }
        values.pop();
    }

    while (!aux.empty()) {
        values.push(aux.top());
        aux.pop();
    }

    std::stack<int> result;

    while (!values.empty()) {
        result.push(values.top());
        values.pop();
    }

    values = result;
}