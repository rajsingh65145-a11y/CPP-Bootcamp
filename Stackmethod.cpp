#include<iostream>
using namespace std;

class stack{
    int s[5];
    int top;
    public:
    stack(){top=0;}

    void push(int x){
        if(top=5){
            cout<<"stack Overflow\n";
            return;
        }
        top=top+1;
        s[top]=x;
        cout<<"inserted:"<<x<<endl;
    }
    void pop(){
        if(top==0){
            cout<<"stack Underflow\n";
            return;
        }
        cout<<"deleted:"<<s[top]<<endl;
        top=top-1;
    }
    void peep(int i){
        if(top-i+1<=0){
            cout<<"stack Underflow\n";
            return;
        }
        cout<<"element at position "<<i<<" First Top: "<<s[top-i+1]<<endl;
    }
    void change(int i, int item){
        if(top-i+1<=0){
            cout<<"stack Underflow\n";
            return;
        }
        s[top-i+1]=item;
        cout<<"Positiion"<<i<<" changed to "<<item<<endl;
    }
    
    void display() {
        if (top == 0) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack (top to bottom): ";
        for (int i = top; i >= 1; i--) {
            cout << s[i] << " ";
        }
        cout << endl;
    }
};


int main() {
    stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.display();      // 30 20 10

    st.pop();
    st.display();      // 20 10

    st.push(20);
    st.push(40);
    st.display();

    st.peep(2);         // 2nd element from top
    st.change(2, 99);
    st.display();

    return 0;
}