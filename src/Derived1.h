//
// Created by andre on 3/27/2022.
//

#include "Base.h"
#ifndef LAB01_INHERITANCE_DERIVED1_H
#define LAB01_INHERITANCE_DERIVED1_H

class Derived1 : public Base {
public:
    Derived1();
    void do_something() override;
    virtual ~Derived1();

};



#endif //LAB01_INHERITANCE_DERIVED1_H
