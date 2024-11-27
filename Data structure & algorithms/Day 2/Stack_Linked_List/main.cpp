#include <iostream>

using namespace std;
#include "Stack.h"

int main()
{
  Stack stk;
  stk.push(1);
  stk.push(10);
  stk.push(14);
  stk.push(12);
  stk.push(5);
  stk.push(20);
  int data,i=0;
  if(stk.peak(data))
    cout<<"Peek() : "<<data<<" \n";
  else
    cout<<"Stack is Empty";

  while(stk.pop(data)){
    cout<<"Output : "<<i<<" : "<<data<<" \n";
    i++;
  }
  if(stk.peak(data))
    cout<<"Peek() : "<<data<<" \n";
  else
    cout<<"Stack is Empty";




  return 0;

}
