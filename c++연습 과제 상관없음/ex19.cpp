#include<iostream>
#include<map>
using namespace std;

int main() {
	map<string, int> walk{{"Tue", 2000}, { "Mon",2000 }, { "Wed",2500 }, { "Sun",1000 }
	};
	cout << walk["Sun"] << endl;
	walk.insert({ "Thu",3000 });
	walk.erase("Mon");
}