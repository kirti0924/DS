#include <iostream>
using namespace std;

int arr[5]; 
int top = -1; 
void push(int value) 
{
    if (top == 4) 
    { 
        cout << "Stack is Full!\n";
    } 
    else 
    {
        top++; 
        arr[top] = value; 
        cout << value << " added.\n";
    }
}
void pop() 
{
    if (top == -1)
     {
        cout << "Stack is Empty! Nothing to remove.\n";
    } 
    else {
        cout << arr[top] << " removed.\n";
        top--;
    }
}
void peek() {
    if (top == -1) 
    {
        cout << "Stack is Empty.\n";
    } 
    else 
    {
        cout << "Top element is: " << arr[top] << "\n";
    }
}
void display() {
    if (top == -1)
    {
        cout << "Stack is Empty.\n";
    }
    else 
    {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) 
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display(); 
    peek(); 
    pop(); 
    display(); 
    return 0;
}

