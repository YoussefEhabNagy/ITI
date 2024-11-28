#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
using namespace std;
class LinkedList
{
    //How Many Node ?
    //Node node;
    //Node node[?????];
    private:
        Node * head;
        Node * tail;
        Node * getNodeUsingData(int data){
        Node *current=head;
        while(current != NULL){
            if(current->Data==data){
                return current;
            }
            //Jump
            current=current->Next;
        }
        return NULL;

    }


    public:
        LinkedList() {
            head=tail=NULL;
        }
        void add(int data){
            //Create Node
            Node * node = new Node(data); //Create Object Node , Data=data , next,prev=null

                if(head == NULL){//First Node
                    head=tail=node;
                    //node->Next=node->prev=NULL;
                }
                else{//Not First Node
                    tail->Next =node; //Old->Next=NewNode
                    node->Prev=tail; //newNode->prev=old(Node)
                    tail=node;//tail=node;
                }
        }
        void display(){
            Node * current =head;//NULL
            if(current == NULL){
                cout<<"Linked List is Empty \n";
                return ;
            }
            while(current != NULL){
                //Display
                cout<<current->Data<<"\t";
                //Increment Jump Node
                current=current->Next;
            }
            cout<<endl;
        }


    void removeNode(int data){
        //Search Linked List
        Node * node = getNodeUsingData(data);
        if(node == NULL){
            cout<<"Element Not Found , Can't Remove \n";
            return;
        }
        else{
            //Remove First
            if(node == head){
                if(node == tail){
                    tail=head=NULL;
                }
                else{
                    head=node->Next;
                    head->Prev=NULL;
                }

            }
            else if (node == tail){ //Remove Last
                tail=node->Prev;
                tail->Next=NULL;
            }
            else{//Remove Mid
                Node * A=node->Prev;
                Node * B=node->Next;
                A->Next=B;
                B->Prev=A;
            }

            delete(node);

        }

    }

    int search_using_data(int data){
        Node * node = getNodeUsingData(data);
        if(node == NULL){
            return 0;
        }
        else{
            return 1;
        }
    }

    void InsertAfter(int data, int afterData){
        Node * node = getNodeUsingData(data);
        if(node == NULL){
            cout<<"Element Not Found , Can't insert \n";
            return;
        } else if(node == tail){
            tail = new Node(afterData);
            node->Next = tail;
            tail->Prev = node;
            tail->Next = NULL;
        } else {
            Node * A = node->Next;
            node->Next = new Node(afterData);
            node->Next->Prev = node;
            node->Next->Next = A;
            A->Prev = node->Next;
        }
    }

    void InsertBefore(int data, int beforeData){
        Node * node = getNodeUsingData(data);
        if(node == NULL){
            cout<<"Element Not Found , Can't insert \n";
            return;
        } else if(node == head){
            head = new Node(beforeData);
            node->Prev = head;
            head->Prev = NULL;
            head->Next = node;
        } else {
            Node * A = node->Prev;
            node->Prev = new Node(beforeData);
            node->Prev->Next = node;
            node->Prev->Prev = A;
            A->Next = node->Prev;
        }
    }

    int GetCount(){
        if(head == NULL){
            return 0;
        } else if(head == tail){
            return 1;
        }else{
            Node * current = head;
            int counter = 1;
            while(current->Next != NULL){
                counter++;
                current = current->Next;
            }
            return counter;
        }
    }

    int GetDataByIndex(int index){
        if (head == NULL){
            cout<<"Empty";
            return -1;
        } else {
            Node *current = head;
            int current_index = 0;
            do{
               if(index == current_index){
                    return current->Data;
               }
               current_index++;
               current = current->Next;
            }while(current != NULL);
            cout<<"Invalid index (out of range)"<<endl;
            return -1;
        }
    }

///=======================bubble sort======================///
    void Bubble_sort(){
        int list_size = GetCount();
        Node* current = head;
        int temp = 0;
        for(int i=0; i<list_size-1; i++){
            current = head;
            for(int j=0; j<list_size-1-i;j++){
                if(current->Data > current->Next->Data){
                    temp = current->Data;
                    current->Data = current->Next->Data;
                    current->Next->Data = temp;
                }
                current = current->Next;
            }
        }
    }

///==================bubble sort swap nodes==============///
    void detach_node(Node* node){
        if(node==head){
            if(node==tail){
                head = tail= NULL;
            }
            head = node->Next;
        } else if (node==tail){
            tail = node->Prev;
        } else {
            node->Next->Prev = node->Prev;
            node->Prev->Next = node->Next;
        }
        node->Prev = node->Next = NULL;
    }
    void attach_after_present_node(Node* node, Node* present_node){
        if(present_node == tail){
            present_node->Next = node;
            node->Prev = present_node;
            node->Next = NULL;
        } else {
            node->Next = present_node->Next;
            node->Prev = present_node;
            present_node->Next->Prev = node;
            present_node->Next = node;
        }
    }

    void Bubble_sort_s_nodes(){
        int list_size = GetCount();
        Node* current = head;
        int temp = 0;
        for(int i=0; i<list_size-1; i++){
            current = head;
            for(int j=0; j<list_size-1-i;j++){
                if(current->Data > current->Next->Data){
                    detach_node(current);
                    attach_after_present_node(current, current->Next);
                }
                current = current->Next;
            }
        }
    }

    protected:

};

#endif // LINKEDLIST_H
