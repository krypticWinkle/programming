#include <bits/stdc++.h>
using namespace std;

void printSubsequence(string input, string output, int x)
{
	
	if (input.size()==0)
    {
        if(output == "")
        {
            cout<<"[";
        }
        if(output.size() == x)
        {
            cout << output<<"]";
            return;
        }
        cout << output<<", ";
        
		return;
	}

    printSubsequence(input.substr(1), output, x);
	
	printSubsequence(input.substr(1), output + input[0], x);

}

int main()
{
	string output = "";
	string input;
    cin>>input;
    int x = input.size();
	printSubsequence(input, output, x);

	return 0;
}