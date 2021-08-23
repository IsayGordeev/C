#include <vector>
#include <iostream>

class MinStack {
private:
    std::vector<int> min;
    std::vector<int> m_data;
public:
    MinStack() = default;

    ~MinStack() = default;

    void push(int x) {
        m_data.push_back(x);
        if (min.empty() || min[min.size()-1] >= x) {
            min.push_back(x);
        }
    };

    void pop() {
        if (m_data[min.size()-1] == min[min.size()-1]) {
            min.pop_back();
        }
        m_data.pop_back();
    };

    int top() {
        return m_data[min.size()-1];
    };

    void print() {
        for (int i : m_data) {
            std::cout << i << ' ';
        }
    };

    int getMin() {
        return min[min.size()-1];
    };
};