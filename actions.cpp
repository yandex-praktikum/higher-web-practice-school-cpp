#include "actions.h"

#include <sstream>

#include "state.h"
#include "accesscontrol.h"

std::vector<std::string> split(const std::string& s) {
    std::vector<std::string> parts;
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, '_')) {
        parts.push_back(item);
    }
    return parts;
}

std::unique_ptr<Action> createAction(const std::string& name, std::unordered_set<std::string>&& availableActions)
{
    auto params = split(name);
    if (params.empty()) {
        return nullptr;
    }

    const auto& commandName = params[0];

    if (!availableActions.count(std::string(commandName))) {
        return nullptr;
    }

    if (commandName == "exit") {
        return std::make_unique<ActionExit>();
    }

    return nullptr;
}

void ActionExit::execute(State& state, AccessControl& accessControl)
{
    state.close();
}
