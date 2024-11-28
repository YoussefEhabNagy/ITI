#include <iostream>

using namespace std;
#include "Stack.h"

Stack linear_search(int Array[], int Size, int s_item){
    Stack indx;
    for(int i = 0;i<Size;i++){
        if(Array[i] == s_item){
            indx.push(i);
        }
    }
    return indx;
}

int main()
{
    int arr[10] = {4,1,2,3,4,2,1,2,3,2};

    linear_search(arr,10,2).display();




    return 0;
}
