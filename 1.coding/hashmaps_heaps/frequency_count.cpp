// C++ program to find freq of every word using unordered_map
#include <bits/stdc++.h>
using namespace std;

void printFrequencies(string str)
{
	
	unordered_map<string, int> wordFreq;

	// breaking input into word using string stream
	stringstream ss(str); // Used for breaking words
	//string word; // To store individual words
	while (ss>>str)
		wordFreq[str]++;


	unordered_map<string, int>:: iterator p;
	for (p = wordFreq.begin(); p != wordFreq.end(); p++)
		cout << "(" << p->first << ", " << p->second << ")\n";
}

int main()
{
	string str = "geeks for geeks geeks quiz "
				"practice qa for";
	printFrequencies(str);
	return 0;
}
