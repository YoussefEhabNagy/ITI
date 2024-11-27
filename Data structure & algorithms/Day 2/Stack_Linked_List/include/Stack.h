#ifndef STACK_H
#define STACK_H

#include "Node.h"
using namespace std;


class Stack
{
    private:
        Node * head;
        Node * tail;


    public:
        Stack() {
            head=tail=NULL;
        }

        void push(int data){
            Node* node = new Node(data);
            if(head == NULL){
                head = tail = node;
                node->Prev = NULL;
            } else {
                node->Prev = tail;
                tail = node;
            }
        }

        int pop(int &data){
            if(head == NULL){
                return 0;
            } else if(head == tail){
                data = tail->Data;
                delete(tail);
                head = tail = NULL;
            } else {
                data = tail->Data;
                Node* temp = tail;
                tail = tail->Prev;
                delete (temp);
                return 1;
            }
        }

        int peak(int &data){
            if(head == NULL){
                return 0;
            } else {
                data = tail->Data;
                return 1;
            }
        }
        void display(){
            Node * current =tail;//NULL
            if(current == NULL){
                cout<<"Satck is Empty \n";
                return ;
            }
            while(current != NULL){
                //Display
                cout<<current->Data<<"\t";
                //Increment Jump Node
                current=current->Prev;
            }
            cout<<endl;
        }


    protected:
};

#endif // STACK_H
