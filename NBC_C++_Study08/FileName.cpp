#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
	virtual void makesound() = 0;
};

class dog :public Animal {
public:
	void makesound() {
		cout << "港! 港!" << endl;
	}
};
class cat :public Animal {
public:
	void makesound() {
		cout << "具克~" << endl;
	}
};
class cow :public Animal {
public:
	void makesound() {
		cout << "澜皋~" << endl;
	}
};

int main() {
	dog Dog;
	cat Cat;
	cow Cow;

	Animal* animals[] = { &Dog,&Cat,&Cow };

	for (int i = 0;i < 3;i++) {
		animals[i]->makesound();
	}

}