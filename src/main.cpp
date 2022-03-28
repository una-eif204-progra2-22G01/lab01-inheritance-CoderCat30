//
// Created by andre on 3/27/2022.
//
using namespace std;
#include <iostream>
#include "Derived1.h"
#include "Derived2.h"

int main() {
    cout << "Welcome to the UNA!" << endl;

    Derived1 derived1;
    derived1.do_something();

    Derived2 derived2;
    derived2.do_something();

}