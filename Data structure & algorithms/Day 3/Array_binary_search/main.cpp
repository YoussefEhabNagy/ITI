#include <iostream>

using namespace std;

int Binary_srch(int Array[], int Size, int s_item){
    int start = 0, End = Size-1, mid = 0;
    while(start<=End){
        mid = (start+End)/2;
        if(s_item==Array[mid]){
            return mid;
        } else if(s_item>Array[mid]){
            start = mid+1;
        } else {
            End = mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[10]={1,3,4,5,5,70,443,3333,3334,5000};

    cout<<Binary_srch(arr,10,2);


    return 0;
}
