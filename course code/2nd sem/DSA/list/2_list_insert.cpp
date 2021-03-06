#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> lst;
	list<int>::iterator it;

	for (int i = 0; i < 3; i++) {
		lst.push_back(i);
	}

	cout << "lst.size() = " << lst.size() << endl;
	for (it = lst.begin(); it != lst.end(); it++) {
		cout << *it << endl;
	}
	cout << endl;

	for (int i = 3; i < 6; i++) {
		lst.push_front(i);
	}

	cout << "lst.size() = " << lst.size() << endl;
	for (it = lst.begin(); it != lst.end(); it++) {
		cout << *it << endl;
	}
	cout << endl;

	it = lst.begin();
	advance(it, 2);
	lst.insert(it,99);

	cout << "lst.size() = " << lst.size() << endl;
	for (it = lst.begin(); it != lst.end(); it++) {
		cout << *it << endl;
	}
getchar();
getchar();
	return 0;
}

