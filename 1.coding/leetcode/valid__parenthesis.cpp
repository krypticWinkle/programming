#include<bits/stdc++.h>
using namespace std;

class Stack     /*defining class stack */
{
    int top,size;
    char* bracket_store;

    public:
    //char* a;
    
    Stack(int size)     /* constructor*/
    {
        top = -1;
        //char *bracket_store;// size;
        bracket_store = (char*)calloc(size,sizeof(char));  /*array based implementation of stack*/
    }
    

    int push(char x);
    int pop(char y);
};
    int Stack::push (char x)       /*push definition*/
    {
        if(top>=(Stack::size))
        {
            
        }
        else
        {
            *(bracket_store + (++top)) = x;
        }
        return top;
    }
    int Stack::pop(char y)     /*pop definition*/
    {
        if(top==-1)
        {
            
        }
        else
        {
            y=*(bracket_store + (--top));    
        }
        return top;
    }
    
int main ()
{
    int i,j,top=-1;
    string input_string;
    cin>>input_string;
    class Stack s(input_string.size()); /*object definition*/

    for(i=0;i<input_string.size();)
    {
        if(input_string.at(i) == '(' || input_string.at(i) =='{' || input_string.at(i) =='[')/*call push if opening bracket encountered*/
        {
            top=s.push(input_string.at(i));
            i++;
        }
        else        /*calling pop if opening bracket encountered*/
        {
            if(i>0)
            {
                if(input_string.at(i-1)=='(' && input_string.at(i)==')')
                {
                    top=s.pop(input_string.at(i-1));i++;
                }
                else if(input_string.at(i-1)=='{' && input_string.at(i)=='}')
                {
                    top=s.pop(input_string.at(i-1));i++;
                }
                else if(input_string.at(i-1)=='[' && input_string.at(i)==']')
                {
                    top=s.pop(input_string.at(i-1));i++;
                }
                else
                {
                    //return false;
                    break;
                }
            }
            else
            {
                //return false;
                break;
            }   
        }    
    }
    if(top==-1)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}