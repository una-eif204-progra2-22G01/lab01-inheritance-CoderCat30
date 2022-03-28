//
// Created by andre on 3/27/2022.
//

#include "Base.h"
#ifndef LAB01_INHERITANCE_DERIVED2_H
#define LAB01_INHERITANCE_DERIVED2_H

class Derived2 : public Base {
public:
    Derived2();
    void do_something() override;
    virtual ~Derived2();
};



#endif //LAB01_INHERITANCE_DERIVED2_H
