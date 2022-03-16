#pragma once
#include "InternalCombustionEngine.h"
class DieselEngine :
    public InternalCombustionEngine
{
private:
    float Pinput;
    float Poutput;

public :
    DieselEngine();
    ~DieselEngine();
    void set();
    float GetEfficiency();
};

