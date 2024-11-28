#include <iostream>

using namespace std;
#include "LinkedList.h"



int main()
{
    LinkedList ls;
    ls.add(66);
    ls.add(3);
    ls.add(5);
    ls.add(1);
    ls.add(33);

    ls.display();
    //ls.Bubble_sort();
    ls.Bubble_sort_s_nodes();
    ls.display();



    return 0;
}
