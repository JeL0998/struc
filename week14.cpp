#include <iostream>

using namespace std;

struct Person {

	string name;
	int citizenship;
	int age;
};

int main(void) {

	struct Person p;
	p.name;
	p.citizenship = 1;
	p.age = 27;

	cout << "Person name: ";
	cin >> p.name;
	cout << "Person citizenship: " << p.citizenship << endl;
	cout << "Person age: " << p.age << endl;

	return 0;
}