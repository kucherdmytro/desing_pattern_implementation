#ifndef MOCHA_H
#define MOCHA_H

#include "addondecorator.h"

class Mocha : public AddonDecorator
{
private:
    Beverage *beverage;
public:
    Mocha(Beverage *beverage);
    ~Mocha() override;

    std::string getDescription() override;
    double getCost() override;
};

#endif // MOCHA_H
