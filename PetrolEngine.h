#pragma once
#include "InternalCombustionEngine.h"
class PetrolEngine :
    public InternalCombustionEngine
{
private:
    float Pinput;
    float Poutput;

public: 
    PetrolEngine();
    ~PetrolEngine();
    void set();
      float GetEfficiency();
};

