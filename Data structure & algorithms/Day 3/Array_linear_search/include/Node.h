#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node * Prev;
        int Data;
        Node(int data){
            Data=data;
            Prev=NULL;
        }

    protected:

    private:
};

#endif // NODE_H
