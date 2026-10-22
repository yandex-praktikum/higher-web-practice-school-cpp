#include "menu.h"

#include <iostream>
#include <unordered_set>

#include "state.h"
#include "actions.h"

Menu::Menu()
{

}

std::unique_ptr<Action> Menu::show(const State& state)
{
    std::string actionName;
    std::unordered_set<std::string> availableActions;

    std::cout << "------ Волшебная школа ------" << std::endl;
    std::cout << "exit - завершить работу приложения" << std::endl;
    availableActions = {"exit"};

    std::cout << std::endl << "Введите комманду: ";
    std::cin >> actionName;
    std::cout << std::endl;

    auto action = createAction(actionName, std::move(availableActions));
    if (!action) {
        std::cout << "Введенная команда не определена" << std::endl << std::endl;
    }

    return action;
}
