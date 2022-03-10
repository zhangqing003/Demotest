#include<algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
	vector<int >a;
	map<int, int> s;
	s.insert(make_pair(1, 2));
	s.insert(make_pair(2, 2));
	for (auto it = s.begin();  it != s.end(); it++) {

		cout << it->first << "   " << it->second << endl;
	}
	cout << "zq" << endl;
	cout << "这是张清写的代码" << endl;

}
