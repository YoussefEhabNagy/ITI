#include <iostream>

using namespace std;
#include "LinkedList.h"



int main()
{
    LinkedList mylist;
    cout<<mylist.GetCount()<<endl;
    mylist.add(3);
    cout<<mylist.GetCount()<<endl;
    mylist.add(5);
    mylist.add(10);
    mylist.add(3);
    mylist.add(13);
    mylist.display();// 3 5 10 3 13
    mylist.InsertAfter(10,220);
    mylist.display();
    mylist.InsertAfter(3,2220);
    mylist.display();
    mylist.InsertBefore(3,2220);
    mylist.display();
    mylist.InsertBefore(13,5550);
    mylist.display();
    cout<<mylist.GetCount()<<endl;
    cout<<mylist.GetDataByIndex(0)<<endl;
    cout<<mylist.GetDataByIndex(1)<<endl;
    cout<<mylist.GetDataByIndex(2)<<endl;
    cout<<mylist.GetDataByIndex(9)<<endl;
    cout<<mylist.GetDataByIndex(10)<<endl;
    cout<<mylist.GetDataByIndex(-2)<<endl;


    return 0;
}
