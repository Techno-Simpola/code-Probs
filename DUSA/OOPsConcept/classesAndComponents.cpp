#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Hero{

public:
	char level;
	int id;

	//constructor...
	Hero(){
		cout << "Constructor Called here..." << endl;
	}

	//setting up Setters...
	void setLevel(char level){
		this->level = level ;
	}

	void setId(int id){
		this->id = id;
	}


	void print(){
		cout << "Level is: " << level << endl;
		cout << "Id is: " << id << endl;
	}
};

int main()
{	

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	Hero *hero1 = new Hero; //dynamic object(Hero) creation

	hero1->setLevel('A');
	hero1->setId(313);

	hero1->print();

	return 0;
}