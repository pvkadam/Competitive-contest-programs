#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int i = 0;
	int ch = 0;	
	while (ch != 5) {
	cout<<"\nPress 1 to enter an element"<<endl;
	cout<<"Press 2 to delete an element"<<endl;
	cout<<"Press 3 to find an element"<<endl;
	cout<<"Press 4 to print all the elements"<<endl;
	cout<<"Press 5 to exit\n"<<endl;	
	cin>>ch;

		if (ch == 1) {
			int x;
			cin>>x;
			cout<<"\n Enter the element"<<endl;
			v.push_back(x);
			i++;
			cout<<"The inserted element is "<<v[i - 1]<<endl;
		}

		else if (ch == 2) {
			if (i > 0) {	
				v.erase(v.begin());
				cout<<"Deleted element is "<<v[i - 1]<<endl;
				i--;
			}
			else {
				cout<<"There is no element in the vector"<<endl;
			}
		}

		else if (ch == 3) {
			int j = 0;
			int x;
			int c = 0;
			cout<<"enter the element to be found"<<endl;
			cin>>x;
			for (j = 0; j < i; j++) {
				if ( x == v[j]) {
					cout<<"Element found at"<<j+1<<"th position";
					c++;
				}
			}
			if (c == 0) {
				cout<<"no such element found"<<endl;
			}
		}	
	
	
		else if(ch == 4) {
			int j;
			if (i == 0) {
				cout<<"Koi element hai hi nhi"<<endl;
			}
			else {
				for (j = 0;j < i;j++) {
					cout<<v[j]<<endl;
				}
			}
		}

	}

	return 0;

}
