#include <iostream>
#include <vector>


class MinStack {
private:
    std::vector<int> min;
    std::vector<int> m_data;
public:
    MinStack() = default;

    ~MinStack() = default;

    void push(int x) {
        m_data.push_back(x);
        if (min.empty() or min[min.size()-1] >= x) {
            min.push_back(x);
        }
    };

    void pop() {
        if (m_data[m_data.size()-1] == min[min.size()-1]) {
            min.pop_back();
        }
        m_data.pop_back();
    };

    int top() {
        return m_data[m_data.size()-1];
    };

    void print() {
        for (int i : m_data) {
            std::cout << i << ' ';
        }
    };

    void print1() {
        for (int i : min) {
            std::cout << i << ' ';
        }
    };
    
    int getMin() {
        return min[min.size()-1];
    };
};

//int main() {
//    MinStack a;
//    for(int i = 1; i < 3; ++i)
//        a.push(i);
//    a.push(2);
//    a.print();
//    std::cout << std::endl;
//    std::cout << a.top() << std::endl;
//    std::cout << std::endl;
//    a.pop();
//    std::cout << a.top() << std::endl;
//    std::cout << a.getMin() << std::endl;
//
//}