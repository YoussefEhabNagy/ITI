#include <iostream>

using namespace std;
#include "Circular_Queue.h"


int main() {
    Circular_Queue cq(5);

    cout << "Enqueue elements 10, 20, 30, 40, 50\n";
    cq.Enqueue(10);
    cq.Enqueue(20);
    cq.Enqueue(30);
    cq.Enqueue(40);
    cq.Enqueue(50);

    cout << "Attempt to enqueue 60:\n";
    cout<<cq.Enqueue(60);

    cout << "\nDisplay!! \n";
    cq.display();

    // Testing Dequeue operation
    cout << "Dequeue elements (should show 10, 20, 30, 40, 50):\n";
    int x;
    for (int i = 0; i < 5; i++) {
        cq.DeQueue(x);
        cout << x << " ";
    }
    cout << endl;

    cout << "Attempt to dequeue from empty queue :\n";
    cout<<cq.DeQueue(x);


    // Re-enqueue to test circular behavior
    cout << "\nRe-enqueue elements 70, 80:\n";
    cq.Enqueue(70);
    cq.Enqueue(80);

    //test getfront and getrear
    cout<<"head index : "<<cq.Getfront()<<"\ttail index : "<<cq.GetRear()<<endl;


    return 0;
}
