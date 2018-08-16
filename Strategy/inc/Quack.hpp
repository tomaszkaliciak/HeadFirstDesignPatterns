#ifndef QUACK_HPP
#define QUACK_HPP

#include "IQuackBehavior.hpp"

class Quack: public IQuackBehavior {
public:
    void quack() override;
};

#endif //QUACK_HPP