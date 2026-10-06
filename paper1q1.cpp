/* #include<iostream.h>
#include<conio.h>
#define MAX 5                       // stack ki size

class Stack
{
    int a[MAX];                     // array jisme data rahega
    int top;                        // top ka index
public:
    Stack() { top = -1; }           // shuru mein stack khali

    void push(int x)
    {
        if (top == MAX - 1)
            cout << "Stack Overflow (full hai)";
        else
        {
            top++;
            a[top] = x;
            cout << x << " pushed";
        }
    }
    void pop()
    {
        if (top == -1)
            cout << "Stack Underflow (khali hai)";
        else
        {
            cout << a[top] << " popped";
            top--;
        }
    }
    void peep()
    {
        if (top == -1)
            cout << "Stack khali hai";
        else
            cout << "Top element = " << a[top];
    }
};

void main()
{
    Stack s;
    int ch, x;
    do
    {
        clrscr();
        cout << "1. Push\n2. Pop\n3. Peep\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1: cout << "Enter value: ";
                cin >> x;
                s.push(x);
                break;
        case 2: s.pop();  break;
        case 3: s.peep(); break;
        case 4: break;
        default: cout << "Wrong choice";
        }
        getch();
    } while (ch != 4);
}*/