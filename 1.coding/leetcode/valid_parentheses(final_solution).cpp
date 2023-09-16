#include<bits/stdc++.h>
using namespace std;

class Stack     /*defining class stack */
{
    int top,size;
    char* bracket_store;

    public:
    
    Stack(int capacity)     /* constructor*/
    {
        top = -1;
        size=capacity;
        bracket_store = (char*)calloc(size,sizeof(char));  /*array based implementation of stack*/
    }
    

    int push(char x);
    char pop();
    int isEmpty();
};
    int Stack::push (char x)       /*push definition*/
    {
        if(top>=(Stack::size))
        {
            return -1;
        }
        else
        {
            *(bracket_store + (++top)) = x;
        }
        return top;
    }
    char Stack::pop()            /*pop definition*/
    {
        char y='A';
        if(top==-1)
        {
            
        }
        else
        {
            y = bracket_store[top--];         //(bracket_store[--top])
        }
        //cout<<y;
        return y;
    }
    int Stack::isEmpty()
    {
	    return top;
    }
    
int main ()
{
    int i,j,top=-1;
    char popped_bracket;
    string input_string;
    cin>>input_string;
    class Stack s(input_string.size()); /*object definition*/

    for(i=0;i<input_string.size();i++)
    {
        if(input_string.at(i) == '(' || input_string.at(i) =='{' || input_string.at(i) =='[')/*call push if opening bracket encountered*/
        {
            top=s.push(input_string.at(i));
        }
        else        /*calling pop if opening bracket encountered*/
        {
            if(i>0)
            {
                popped_bracket=s.pop();
                top=s.isEmpty();
                if(popped_bracket=='(' && input_string.at(i)==')')
                {
                    continue;
                }
                else if(popped_bracket=='{' && input_string.at(i)=='}')
                {
                    continue;
                }
                else if(popped_bracket=='[' && input_string.at(i)==']')
                {
                    continue;
                }
                else
                {
                    popped_bracket='A';
                    break;
                }
            }
            else
            {
                break;
            }
        }   
    }
    if(top==-1 && popped_bracket!='A' && i!=0)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}