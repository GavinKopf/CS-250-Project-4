#include "SpecialStack.h"
#include <stack>
#include <iostream>
#include <vector>
using namespace std;
SpecialStack::SpecialStack()
{
    //ctor
}
void SpecialStack::push(int n){
    m_stack.push(n);
}
void SpecialStack::pop(){
    if (!m_stack.empty())
        m_stack.pop();
}
int SpecialStack:: peek(){
    return m_stack.top();
}
bool SpecialStack::empty(){
    return m_stack.empty();
}
void SpecialStack::printStack(){
    stack<int> temp = m_stack;
    while(!temp.empty()){
        cout << temp.top() << ", ";
        temp.pop();
    }
    cout << endl;
}
void SpecialStack::popOdd(){
      if(!m_stack.empty()){

        vector <int> nums ;
        stack<int> temp = m_stack;
        for(int i = 0; i < m_stack.size(); i++){
            if ((temp.top() % 2) != 0){
                temp.pop();
                for(int j = i; j >= 0; j--){
                    temp.push(nums.at(j));
                }
                m_stack = temp;
                return;

            }
            else{
                nums.push_back(temp.top());
                temp.pop();
            }
        }
    }
}
void SpecialStack::popEven(){
    if(!m_stack.empty()){

        vector <int> nums;
        stack<int> temp = m_stack;
        for(int i = 0; i < m_stack.size(); i++){
            if ((temp.top() % 2) == 0){
                temp.pop();
                for(int j = i; j >= 0; j--){
                    temp.push(nums.at(j));
                }
                m_stack = temp;
                return;

            }
            else{
                nums.push_back(temp.top());
                temp.pop();
            }
        }
    }
}
