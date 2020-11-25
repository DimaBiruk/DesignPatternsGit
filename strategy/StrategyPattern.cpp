// StrategyPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DuckClasses.h"
int main()
{
    Duck* newDuck = new BlueDuck;
    newDuck->performQuack();
    newDuck->performFly();
    newDuck->setQuackBehavior(new Squeek);
    newDuck->performQuack();
}


