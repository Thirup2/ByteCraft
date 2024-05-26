#ifndef GATE_CIRCUIT_H_
#define GATE_CIRCUIT_H_

#include "transistor.h"

class and_gate
{
private:
    transistor _in1, _in2, _out;
public:
    and_gate(transistor in1, transistor in2) :_in1(in1), _in2(in2), _out(_in1.state() && _in2.state()) { }
};

class or_gate
{
private:
    transistor _in1, _in2, _out;
public:
    or_gate(transistor in1, transistor in2) :_in1(in1), _in2(in2), _out(_in1.state() || _in2.state()) { }
};

class not_gate
{
private:
    transistor _in, _out;
public:
    not_gate(transistor in) :_out(!_in.state()) { }
};

#endif