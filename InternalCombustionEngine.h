#pragma once
#include "Engine.h"
class InternalCombustionEngine :
    public Engine
{
private:
    float Pinput;
    float Poutput;

public:
    InternalCombustionEngine();
    ~InternalCombustionEngine();
    void set();
    float GetEfficiency();
};

