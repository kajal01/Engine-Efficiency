#pragma once
#include "Engine.h"
class ExternalCombustionEngine :
    public Engine
{
private:
    float Pinput;
    float Poutput;

public:
    ExternalCombustionEngine();
    ~ExternalCombustionEngine();
    void set();
    float GetEfficiency();
};

