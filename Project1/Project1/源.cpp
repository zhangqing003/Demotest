#include<algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main() {
	vector<int >a;
	map<int, int> s;
	vector<int>b(a);
	set<int> s2;
	
	s.insert(make_pair(1, 2));
	s.insert(make_pair(2, 2));
	for (auto it = s.begin();  it != s.end(); it++) {

		cout << it->first << "   " << it->second << endl;
	}
<<<<<<< HEAD
	cout << "hhh" << endl;
=======
	cout << "zq" << endl;


>>>>>>> zq
}
