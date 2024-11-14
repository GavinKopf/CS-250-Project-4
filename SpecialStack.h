#ifndef SPECIALSTACK_H
#define SPECIALSTACK_H
#include <stack>
using namespace std;
class SpecialStack
{
    public:
        SpecialStack();
        void push(int);
        void pop();
        int peek();
        bool empty();
        void printStack();
        void popOdd();
        void popEven();

    private:
        stack<int> m_stack;

};

#endif // SPECIALSTACK_H
