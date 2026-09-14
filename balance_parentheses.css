#include <iostream>
#include <string>
using namespace std;
#define size 100
char myStack[100];
int top = -1;
void pushOp(char ch) 
{
    if (top==size-1) 
    {
        cout << "Stack Overflow!\n";
    } 
    else 
    {
        top++;
        myStack[top] = ch;
    }
}
char popOp() 
{
    if (top == -1) 
    {
        cout << "Stack Underflow!\n";
        return '\0';
    } 
    else 
    {
        char ch = myStack[top];
        top--;
        return ch;
    }
}
int getPriority(char op) 
{
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}
void convertInfixToPostfix(string infix) 
{
    top = -1;
    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];
        if (isalnum(ch)) 
        {
            cout << ch;
        }
        else if (ch == '(') 
        {
            pushOp(ch);
        }
        else if (ch == ')') 
        {
            while (top >= 0 && myStack[top] != '(') 
            {
                cout << popOp();
            }
            popOp(); 
        }
        else 
        {
            while (top >= 0 && getPriority(myStack[top]) >= getPriority(ch)) 
            {
                cout << popOp();
            }
            pushOp(ch);
        }
    }
    while (top >= 0) 
    {
        cout << popOp();
    }
    cout << "\n";
}

int main() 
{
    string expr = "A+B*C";
    cout << "Original Infix Expression: " << expr << "\n";
    cout << "Converted Postfix Output: ";
    convertInfixToPostfix(expr); 
    return 0;
}

