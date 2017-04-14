#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {

	vector<int> count;

	for(auto i=0; i<100; i++) {
		count.push_back(i);
	}

	for(auto i : count ) {
		cout << "Count: " << i << endl;
	}

	return 0;

}