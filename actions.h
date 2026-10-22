#ifndef ACTIONS_H
#define ACTIONS_H

#include <memory>
#include <string>
#include <unordered_set>

class State;
class AccessControl;

class Action
{
public:
    virtual ~Action() = default;
    virtual void execute(State& state, AccessControl& accessControl) = 0;
};

std::unique_ptr<Action> createAction(const std::string& name, std::unordered_set<std::string>&& availableActions);

class ActionExit final : public Action
{
public:
    void execute(State& state, AccessControl& accessControl) final;
};

#endif // ACTIONS_H
