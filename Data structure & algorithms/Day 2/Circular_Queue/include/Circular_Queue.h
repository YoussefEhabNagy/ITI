#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H


class Circular_Queue{

private:
    int* Q;
    int* Head;
    int* Tail;
    int Size,Counter,head_index;


public:

    Circular_Queue(){
        Size = 5;
        Counter = 0;
        head_index = 0;
        Q = new int [5];
        Head = Tail = Q;
    }

    Circular_Queue(int x){
        Size = x;
        Counter = 0;
        head_index = 0;
        Q = new int [Size];
        Head = Tail = Q;
    }

    ~Circular_Queue(){
        delete[] Q;
    }

    bool IsFull(){
        return (Counter == Size);
    }

    bool IsEmpty(){
        return (Counter == 0);
    }

    int Enqueue(int x){
        if(Counter==Size){
            return 0;
        } else {
            *Tail = x;
            Counter++;
            Tail = (Tail==(Q+Size-1))? Q : Tail+1 ;
            return 1;
        }
    }

    int DeQueue(int &data){
        int x;
        if(Counter==0){
            return 0;
        } else {
            Counter--;
            data = *Head;
            Head = (Head==(Q+Size-1))? Q : Head+1 ;
            head_index = (head_index == Size-1)? 0 : head_index+1;
            return 1;
        }
    }

    int Getfront(){
        return head_index;
    }
    int GetRear(){
        int Tail_index = (head_index+Counter-1)%(Size-1);
        Tail_index = (Tail_index<0)?0:Tail_index;
        return Tail_index;
    }

    int display(){
        if(Counter==0){
            return -1;
        } else {
            int* current = Head;
            for(int i = 0;i<Counter;i++){
                cout<<*current<<endl;
                current = (current==(Q+Size-1))? Q : current+1 ;
            }
            return 1;
        }
    }

};

#endif // CIRCULAR_QUEUE_H
