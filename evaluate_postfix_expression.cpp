#include <iostream>
#include <string>
using namespace std;
int myNumStack[100];
int top = -1;
void pushInt(int val) 
{
    if (top >= 99) 
    {
        cout << "Stack Overflow!\n";
    } 
    else 
    {
        top++;
        myNumStack[top] = val;
    }
}
int popInt() 
{
    if (top == -1) 
    {
        cout << "Stack Underflow!\n";
        return 0;
    } 
    else 
    {
        int val = myNumStack[top];
        top--;
        return val;
    }
}
void runPostfixEvaluation(string expr) {
    top = -1;
    for (int i = 0; i < expr.length(); i++) 
    {
        char ch = expr[i];
        if (isdigit(ch)) 
        {
            pushInt(ch - '0');
        }
        else 
        {
            int val2 = popInt();
            int val1 = popInt();
            if (ch == '+') pushInt(val1 + val2);
            else if (ch == '-') pushInt(val1 - val2);
            else if (ch == '*') pushInt(val1 * val2);
            else if (ch == '/') pushInt(val1 / val2);
        }
    }
    cout << "Final Calculation Answer: " << popInt() << "\n";
}
int main() 
{
    string expr = "23+4*";
    cout << "Postfix Equation Passed: " << expr << "\n";
    runPostfixEvaluation(expr);
    return 0;
}

