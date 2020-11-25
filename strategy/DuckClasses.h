#include <iostream>
#include "DuckBehaviors.h"
class Duck {
protected:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;
public:
	Duck(): flyBehavior(nullptr), quackBehavior(nullptr) {};

	void setFlyBehavior(FlyBehavior* fb) {
		if (flyBehavior) delete flyBehavior;
		flyBehavior = fb;
	}
	void setQuackBehavior(QuackBehavior* qk) {
		if (quackBehavior) delete quackBehavior;
		quackBehavior = qk;
	}
	void performQuack() {
		quackBehavior->Quack();
	}
	void performFly() {
		flyBehavior->Fly();
	}
	~Duck() {
		delete flyBehavior;
		delete quackBehavior;
	}
};

class BlueDuck : public Duck {
public:
	BlueDuck() {
		flyBehavior = new FlyWithWings();
		quackBehavior = new LoudQuack();
	}
};
