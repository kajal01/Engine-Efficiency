#pragma once
#include "ExternalCombustionEngine.h"
class SteamEngine :
    public ExternalCombustionEngine
{
private:
    float Pinput;
    float Poutput;

    public:
        SteamEngine();
        ~SteamEngine();
        void set();
    float GetEfficiency();
};

