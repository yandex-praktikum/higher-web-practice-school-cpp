#ifndef ACCESSCONTROL_H
#define ACCESSCONTROL_H

#include <string>

class State;

class AccessControl
{
public:
    AccessControl();

    bool login(const std::string& userName, const std::string& password);
    void logout();

    bool checkPermission(const std::string& action, const std::string& target, const State& state) const;
};

#endif // ACCESSCONTROL_H
