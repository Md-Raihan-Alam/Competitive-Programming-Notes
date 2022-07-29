// CPP program to illustrate
// Implementation of swap() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Take any two maps
	map<int, char> map1, map2;

	map1[1] = 'a';
	map1[2] = 'b';
	map1[3] = 'c';
	map1[4] = 'd';

	map2[5] = 'w';
	map2[6] = 'x';
	map2[7] = 'y';

	// Swap elements of queues
	swap(map1, map2);

	// Print the elements of maps
	cout << "map1:\n"
		<< "\tKEY\tELEMENT\n";
	for (auto it = map1.begin();
		it != map1.end(); it++)

		cout << "\t" << it->first << "\t" << it->second << '\n';

	cout << "map2:\n"
		<< "\tKEY\tELEMENT\n";
	for (auto it = map2.begin();
		it != map2.end(); it++)

		cout << "\t" << it->first << "\t" << it->second << '\n';

	return 0;
}
