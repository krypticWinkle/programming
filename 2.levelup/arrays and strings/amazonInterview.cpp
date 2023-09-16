/**
Note :- 
0. First discuss the solution and write code only after solution is accepted.
1. Write production ready code. Production ready means - 
   0. Code should be working
   1. Code should be modular
   2. Good Function names
   3. Good variable names
   4. All edge/corner cases covered
   5. Write only functions.
3. Write Time and Space Complexity of the Algorithm.
4. You may choose any programming language.
*/

/*
Given a number of at most 100 digits. We have to check if it is possible, 
after removing certain digits, to obtain a number of at least one digit 
which is divisible by 8.

64 ->> true
6 -> false
3144 -> true
*/


//https://www.geeksforgeeks.org/given-large-number-check-subsequence-digits-divisible-8/

bool checkNumber(string s)
{
    if(s.size() == 1)
    {
        if(stoi(s) == 8 || stoi(s) == 0)
            return true;
    }
    if(s.size() == 2)
    {
        if(stoi(s) % 8 == 0 || s[0] == '8' || s[1] == '8')
            return true;
    }
    for(int i=0; i<s.size(); i++){if((s[i])=='8')return true;}
    vector<int> divisibles_of_8;
    for(int i=13; i<1000/8; i++)
    {
        divisibles_of_8.push_back(8*i);
    }
    for(int i=0; i<divisibles_of_8.size(); i++)
    {
        int x = divisibles_of_8[i];
        string xx = to_string(x);
        int f_dig = stoi(xx[0]);
        int s_dig = stoi(xx[1]);
        int th_dig = stoi(xx[2]);
        
        for(int j=0; j<s.size(); j++)
        {
            if(stoi(s[i]) == f_dig)
            {
                int k = j+1;
                while(k < s.size())
                {
                    if(stoi(s[k]) == s_dig)
                    {
                        int l = k+1;
                        while(l < s.size())
                        {
                            if(stoi(s[i]) == th_dig)
                            {
                                return true;
                            }
                        }
                    }
                }
            }
        }
    }
    
    //similarly we'll handle 2 digits
    return false;
    
}



