#include <iostream>
using namespace std;

class FlyBehavior {
public:
	virtual void Fly() = 0;
};

class QuackBehavior {
public:
	virtual void Quack() = 0;
};

class FlyWithWings :public FlyBehavior {
public:
	void Fly() { cout << "i'm flying with wings!" << endl; }
};

class LoudQuack : public QuackBehavior {
public:
	void Quack() { cout << "Quack!" << endl; }
};

class Squeek : public QuackBehavior {
public:
	void Quack() { cout << "Squeek!" << endl; }
};