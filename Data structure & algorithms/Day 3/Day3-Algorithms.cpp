#include <iostream>

using namespace std;
//Linear DataStructe
//non Linear DataStructure

//Sorting ,Searching ===> Data
//Bubble Sort ===> SWAPS
//Algorithm :- Number of Step (Way) to Solve Problems [Looping]
//TimeComplexity : Max Number of Iterations to Achive Target
void swapArray(int & first , int & second){
    int temp=first;
    first=second;
    second=temp;
}
void bubbleSort(int *items,int size){
    //Code
int iterations=0,sorted=0;
for(int j=0; sorted==0; j++){//J=0,1,2,3,4,5 ==>1,3,4,5,6,8
    sorted=1;
    for(int i=0; i<size-1-j; i++){ //0 --> 4
    //Flag
        if(items[i]>items[i+1]){
            //Swap
            swapArray(items[i],items[i+1]);
            sorted=0;
        }
        iterations++;
    }

}
cout<<"iterations : "<<iterations<<endl;
//outLoop 6   n
//InnerLoop 5 n-1
//TimeComp ==>n*(n-1)==>n2-n==>n2

    /*arr[0]>arr[1]
    //Swap
    arr[1]>arr[2]
    //Swap
    ......
    ..... */

}

void selectionSort(int * items, int size){
    int minIndex=0,iteration=0;
    for(int counter=0; counter<size-1; counter++ ){
        minIndex=counter;
        for(int index=counter+1; index<size; index++){
            if(items[index]<items[minIndex]){
                minIndex=index;
            }
            iteration++;
        }
        /*if(counter != minIndex){
        }*/
            swapArray(items[counter],items[minIndex]);

    }
    cout<<"iteration : "<<iteration<<endl;



    //Search MinNumber==> Minindex    ====> index ==> 0
    /*int minIndex=0;
    for(int index=1; index<size; index++){
        if(items[index]<items[minIndex]){
            minIndex=index;
        }
    }
    swapArray(items[0],items[minIndex]);
    minIndex=1;
    for(int index=2; index<size; index++){
        if(items[index]<items[minIndex]){
            minIndex=index;
        }
    }
    swapArray(items[1],items[minIndex]);
    minIndex=2;
    for(int index=3; index<size; index++){
        if(items[index]<items[minIndex]){
            minIndex=index;
        }
    }
    swapArray(items[2],items[minIndex]);*/

}


void displayArray(int *items,int size){
    //Code
    for(int i=0; i<size; i++){
        cout<<items[i]<<"\t";
    }
    cout<<endl;
}
//How Choose Perfect Algorithm
// Time Complexitiy  ==> n2
// Size of Data
// Copy Constructor
// Memory usage
/*Employee e1;
Employee e2;
e1=e2;*/
// Number Of Data
// DataSet ParialSorted
int linearSearch( int *items , int size, int search){
    for(int i=0; i<size; i++){
        if(items[i]==search){
            return i;
        }
    }
    return -1;
}
int binarySearch( int *items , int size, int search)
{
   int start=0,end=size-1,mid=0;
   while(start<=end){
        mid=(start+end)/2;
        if(items[mid]==search){
            return mid;
        }
        else if(items[mid]>search){
            end=mid-1;
        }
        else if(items[mid]<search){
            start=mid+1;
        }
   }
   return -1;




}
int main()
{
    int arr[6]={1,2,3,4,8,7};
    int arr2[6]={1,2,3,4,8,7};

    bubbleSort(arr,6);
    displayArray(arr,6);
    cout<<"============================"<<endl;
    selectionSort(arr2,6);//{1,5,8,4,2,7};
    displayArray(arr2,6);
    cout << "Hello world!" << endl;
    binarySearch(arr,6,2)==-1? cout<<"Not Found":cout<<"Found index";
    return 0;
}
