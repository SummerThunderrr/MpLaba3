#ifndef MYSTACK_H
#define MYSTACK_H
#include <QDebug>


template <typename T>
class MyStack {

public:
    MyStack(int max_size):
        size(max_size) {

        array = new T[size];
        current = 0;
    }

    ~MyStack() {
        delete[] array;
    }

    void push (T value) {
        if ((current+1) ==size) {qDebug()<<"Too much elements in stack";} else {
        array [current++] = value;}
    }

    T pop() {
        if (current == 0) {qDebug()<<"There is no elements. Please, enter new elements";
            return  0;} else {
        return array [--current];}
    }

    T peek() {
        if (current == 0) {qDebug()<<"There is no epements in stack. Please, enter new elements";} else {
        qDebug()<<"Head element "<<array[current-1];
        }
    }

    void printStack () {
        for (int i = 0; i < current; i ++) {
            qDebug()<<"index "<<i<<", value "<<array[i];
        }

    }

    bool isEMpty() const {
        return current == 0;
    }




private:
    T * array{};
    int current{};

    int size{};
};

#endif // MYSTACK_H
