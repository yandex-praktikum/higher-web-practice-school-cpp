#ifndef STATE_H
#define STATE_H

class State
{
public:
    State();

    bool isActive() const;
    void close();

private:
    bool isActive_ = true;
};

#endif // STATE_H
