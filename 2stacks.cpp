#include <iostream >
using namespace std;

class TwoStack
{
    // properties
public: 
    int *arr;
    int top1;
    int top2;
    int size;

    // Constructor
    TwoStack(int size)
    {
   
        this->size = size;
        top1=-1;
        top2=size;
        arr = new int[size];
       
    }


void push1(int num)
{
    // atleat 1 space is present
    if (top2 - top1 > 1)
    {
        top1++;
        arr[top1] = num;
    }

}

void push2(int num)
{
    // atleat 1 space is present
    if (top2 - top1 > 1)
    {
        top2--;
        arr[top2] = num;
    }

}

int pop1()
    {
        // check element is present or not
        if (top1 >= 0)
        {
           int ans=arr[top1];
            top1--;
            return ans;
        }
        else
        {
          return -1;
        }
    }


int pop2()
    {
        // check element is present or not
        if (top2 <size)
        { 
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else
        {
           return -1;
        }
    }

};

    int main(){

    TwoStack st(5); // create a stack of size 5

    st.push1(22);
    st.push2(43);
    st.push1(44);
    st.push2(29);
   



        return 0;

    }
