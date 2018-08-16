#ifndef DUCK_HPP
#define DUCK_HPP

#include <memory>
#include "IFlyBehavior.hpp"
#include "IQuackBehavior.hpp"

class Duck {

public:
    void performQuack();
    void performFly();
    void setFlyBehavior(std::unique_ptr<IFlyBehavior> fb);
    void setQuackBehavior(std::unique_ptr<IQuackBehavior> qb);
    virtual void display() = 0;
    virtual ~Duck() {}

protected:
    std::unique_ptr<IFlyBehavior> _flyBehavior;
    std::unique_ptr<IQuackBehavior> _quackBehavior;
};

#endif //DUCK_HPP