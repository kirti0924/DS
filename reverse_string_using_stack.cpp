#include <iostream>
#include <string>
using namespace std;
char myStack[100];
int top = -1;
void pushChar(char ch) 
{
    if (top >= 99) 
    { 
        cout << "Stack Overflow! No space left.\n";
    } 
    else 
    {
        top++;
        myStack[top] = ch;
    }
}
char popChar() 
{
    if (top == -1) 
    {
        cout << "Stack Underflow! Stack is completely empty.\n";
        return '\0'; 
    } 
    else 
    {
        char ch = myStack[top];
        top--;
        return ch;
    }
}
void reverseString(string str) 
{
    for (int i = 0; i < str.length(); i++) 
    {
        pushChar(str[i]);
    }
    cout << "Reversed String: ";
    while (top >= 0) 
    {
        cout << popChar();
    }
    cout << "\n";
}
int main() {
    string str = "DataStructure";
    cout << "Original String: " << str << "\n";
    reverseString(str); 
    return 0;
}

