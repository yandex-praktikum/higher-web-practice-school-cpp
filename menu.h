#ifndef MENU_H
#define MENU_H

#include <memory>

class State;
class Action;

class Menu
{
public:
    Menu();

    std::unique_ptr<Action> show(const State& state);
};

#endif // MENU_H
