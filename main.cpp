#include "state.h"
#include "menu.h"
#include "actions.h"
#include "accesscontrol.h"

int main(int argc, char *argv[])
{
    State state;
    Menu menu;
    AccessControl accessControl;

    while (state.isActive()) {
        auto action = menu.show(state);
        if (action) {
            action->execute(state, accessControl);
        }
    }

    return 0;
}
