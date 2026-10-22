#include "state.h"

State::State()
{

}

bool State::isActive() const
{
    return isActive_;
}

void State::close()
{
    isActive_ = false;
}
