// C++ implementation of the priority queue in which elements are sorted by the second element

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef pair<int, int> pd;

// Structure of the condition
// for sorting the pair by its
// second elements
class myComp
{
    public:
	bool operator()( pair<int, int> const& a, pair<int, int> const& b)
	{
		return a.second < b.second;
	}
};

// Function to show the elements
// of the priority queue
void showpq( priority_queue<pd, vector<pd>, myComp> g)
{

	while (!g.empty())
     {
		cout << g.top().first << " " << g.top().second << endl;
		g.pop();
	}
	cout << endl;
}

int main()
{
	priority_queue<pd, vector<pd>, myComp> p1;
	p1.push(make_pair(4, 5));
	p1.push(make_pair(5, 4));
	p1.push(make_pair(1, 6));
	p1.push(make_pair(7, 3));
	p1.push(make_pair(9, 4));

	showpq(p1);
	return 0;
}
