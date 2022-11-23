//
// Created by Văn Tuấn on 10/3/22.
//

//
// Created by Văn Tuấn on 10/3/22.
//
#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Stack {
private:
    T data[100];
    int top;
public:
    Stack() {
        top = -1;
    }

    void push(T number) {
        ++top;
        data[top] = number;
    }

    T pop() {
        T value = data[top];
        --top;
        return value;
    }

    T peek() {
        return data[top];
    }
};

int main() {
    Stack<int> number;
    number.push(1);
    number.push(2);
    number.push(3);
    number.push(4);
    number.pop();
    cout << "sau khi pop" << number.peek();
    return 0;
}

