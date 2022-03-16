#include "InternalCombustionEngine.h"

InternalCombustionEngine::InternalCombustionEngine()
{
    Pinput = 0;
    Poutput = 0;
}

InternalCombustionEngine::~InternalCombustionEngine()
{
}

void InternalCombustionEngine::set()
{
    Poutput = 637;
    Pinput = 1362;
}

float InternalCombustionEngine::GetEfficiency()
{
    set();
    return (Poutput/Pinput)*100;
}
