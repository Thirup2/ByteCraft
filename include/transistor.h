#ifndef TRANSISTOR_H_
#define TRANSISTOR_H_

class transistor
{
public:
    static const bool OPEN = true;
    static const bool CLOSE = false;
private:
    bool _state;
public:
    transistor() :_state(false) {}
    transistor(bool sta) :_state(sta) {}
    void set() { _state = true; }
    void clear() { _state = false; }
    bool state() { return _state; }
};

#endif