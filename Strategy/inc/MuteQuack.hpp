#ifndef MUTE_QUACK_HPP
#define MUTE_QUACK_HPP

#include "IQuackBehavior.hpp"

class MuteQuack: public IQuackBehavior {
public:
    void quack() const override;
};

#endif //MUTE_QUACK_HPP