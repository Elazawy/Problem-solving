// Problem name : Design Circular Queue
// URL : https://leetcode.com/explore/learn/card/queue-stack/228/first-in-first-out-data-structure/1337/
// Date : Sat Oct 5 2024 

#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

class MyCircularQueue {
private:
    vector<int> data;
    int front; // front -> rear;
    int rear; // rear -> tail
    int size;
public:
    MyCircularQueue(int k) {
        data.resize(k);
        front = -1;
        rear = -1;
        size = k;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        if(isEmpty()){
            front = 0;
        }
        rear = (rear + 1) % size;
        data[rear] = value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        if(front == rear){
            front = -1;
            rear = -1;
            return true;
        }
        front = (front + 1) % size;
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return data[front];
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return data[rear];
    }
    
    bool isEmpty() {
        if(front == -1){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        return (rear + 1) % size == front;
    }
};
