#include "accesscontrol.h"

#include "state.h"

AccessControl::AccessControl()
{

}

bool AccessControl::login(const std::string& userName, const std::string& password)
{
    return false;
}

void AccessControl::logout()
{

}

bool AccessControl::checkPermission(const std::string& action, const std::string& target, const State& state) const
{
    return false;
}
