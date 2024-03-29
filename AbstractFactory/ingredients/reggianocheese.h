#ifndef REGGIANOCHEESE_H
#define REGGIANOCHEESE_H

#include "interfaces/cheese.h"

class ReggianoCheese : public Cheese
{
public:
    ReggianoCheese();
    ~ReggianoCheese() override = default;

    std::string print() override;
};

#endif // REGGIANOCHEESE_H
