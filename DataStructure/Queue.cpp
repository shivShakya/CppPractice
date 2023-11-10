#include<iostream>
using namespace std;

class Queue {
private:
    int front;
    int rear;

public:

    Queue() : front(0) , rear(0) {};

    void enque(int arr[], int item) {
        int len = sizeof(arr) / sizeof(arr[0]);

        if (rear == len - 1) {
            cout << "Queue is full";
            return;
        }
        arr[++rear] = item;
    }

    int deque(int arr[]) {
        if (front == rear) {
            cout << "Queue is empty";
            return -1; 
        }

        int item = arr[front];
        front++;

        return item;
    }

    void displayQueue(int arr[]) {
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
    Queue q;
    int arr[4];

    q.enque(arr, 2);

    q.displayQueue(arr);

    return 0;
}


