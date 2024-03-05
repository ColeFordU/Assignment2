#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class Single_Linked_List {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& item) : data(item), next(nullptr) {}
    };
    Node* head;
    Node* tail;
    size_t num_items;

public:
    Single_Linked_List();
    ~Single_Linked_List();

    void push_front(const T& item);
    void push_back(const T& item);
    void pop_front();
    void pop_back();
    T front() const;
    T back() const;
    bool empty() const;
    void insert(size_t index, const T& item);
    bool remove(size_t index);
    size_t find(const T& item) const;
};

class Stack {
private:
    std::vector<int> elements;

public:
    bool empty() const;
    void push(int value);
    void pop();
    int top() const;
    double average() const;
};

#endif /* HEADER_H */
