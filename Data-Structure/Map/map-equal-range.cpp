// C++ program to illustrate the
// map::equal_range() function
#include <bits/stdc++.h>
using namespace std;

int main()
{

	// initialize container
	map<int, int> mp;

	// insert elements in random order
	mp.insert({ 4, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 6, 60 });

	pair<map<int, int>::iterator,
		map<int, int>::iterator>
		it;

	// iterator of pairs
	it = mp.equal_range(40);
	cout << "The lower bound is "
		<< it.first->first << ":"
		<< it.first->second;

	cout << "\nThe upper bound is "
		<< it.second->first
		<< ":" << it.second->second;

	return 0;
}
