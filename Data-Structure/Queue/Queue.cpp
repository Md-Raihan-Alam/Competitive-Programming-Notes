// CPP code to illustrate Queue in
// Standard Template Library (STL)
#include <iostream>
#include <queue>

using namespace std;


// Driver Code
int main()
{
	queue<int> gquiz;
	gquiz.push(10);
	gquiz.push(20);
	gquiz.push(30);
	cout << "The queue gquiz is : ";
    // Print the queue	
    while (!gquiz.empty()) {
		cout << '\t' << gquiz.front();
		gquiz.pop();
	}
	cout << '\n';

	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.front() : " << gquiz.front();
	cout << "\ngquiz.back() : " << gquiz.back();

	cout << "\ngquiz.pop() : ";//10
	gquiz.pop();
    // Print the queue	
    while (!gquiz.empty()) {
		cout << '\t' << gquiz.front();
		gquiz.pop();
	}
	cout << '\n';

	return 0;
}
