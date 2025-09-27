// Vaishnavi Pangare
// 25070123501

#include <iostream>
using namespace std;

class Stack 
{
    public:
    int capacity;
    int top;
    int* arr;

    Stack(int capacity) 
    {
        this->capacity = capacity;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack() 
    {
        delete[] arr;
    }

    void push(int element) 
    {
        if (top < capacity - 1) 
        {
            top++;
            arr[top] = element;
        } 
        else 
        {
            cout<< "Stack Overflow" <<endl;
        }
    }

    void pop() 
    {
        if (top >= 0) 
        {
            top--;
        } 
        else 
        {
            cout<< "Stack Underflow" <<endl;
        }
    }

    int peek() 
    {
        if (top >= 0) 
        {
            return arr[top];
        } 
        else 
        {
            return -1;
        }
    }
};

int main() 
{
    Stack st(5);
    st.push(23);    
    st.push(24);
    st.push(25);

    cout<<st.peek() <<endl;
    st.pop();
    cout<<st.peek() <<endl;

    return 0;
}

// OUTPUT
// 25

// 24
