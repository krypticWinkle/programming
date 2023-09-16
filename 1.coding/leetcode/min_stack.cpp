class MinStack
{
  public:
    int top_min_store = -1;
    int top_data_store = -1;
    vector<int>data_store;
    vector<int>min_store;
    MinStack() 
    {
        //vector<int>data_store;
        //vector<int>min_store;
    }
    void push(int x) 
    {

        if((top_min_store == -1) || (min_store[top_min_store] >= x))
        {
            top_min_store++;
            min_store.push_back(x);
        }
        top_data_store++;
        data_store.push_back(x);
    }

    void pop() 
    {
        if(data_store[top_data_store] == min_store[top_min_store])
        {
            min_store.erase(min_store.begin()+top_min_store);
            top_min_store--;
        }
        data_store.erase(data_store.begin()+top_data_store);
        top_data_store--;
    }

        int top() 
        {
            return data_store[top_data_store];
        }

        int getMin() 
        {
            return min_store[top_min_store];
        }
    
};