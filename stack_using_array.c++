#include <iostream>
using namespace std;
int stack[100], n, top = -1;
void push(int val)
{
    if (top >= n - 1)
    {
        cout << "Stack overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = val;
    }
}

void pop()
{
    if (top <= -1)
    {
        cout << "Stack underflow" << endl;
    }
    else
        cout << "Your popped element are : " << stack[top] << endl;
    top--;
}
void display()
{
    if (top > -1)
    {
        cout << "Stack is :"<<" ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i]<<" ";
        }
        cout << endl;
    }
    else
    {
        cout << "stack is empty" << endl;
    }
}

int main()
{
    int val, ch;
    cout << "Enter the size of stack " << endl;
    cin >> n;
    cout << "1)PUSH THE ELEMENT " << endl;
    cout << "2)POP THE ELEMENT " << endl;
    cout << "3)DISPLAY THE ELEMENT " << endl;
    cout << "4)EXIT " << endl;
    do
    {
        cout << "Choose any one " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the value for push " << endl;
            cin >> val;
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "EXITING..." << endl;
            break;
        default:
            cout << "Choose valid option (1-4)" << endl;
        }
    } while (ch != 4);
}