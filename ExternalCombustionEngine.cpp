#include "ExternalCombustionEngine.h"

ExternalCombustionEngine::ExternalCombustionEngine()
{
    Pinput = 0;
    Poutput = 0;
}

ExternalCombustionEngine::~ExternalCombustionEngine()
{
}

void ExternalCombustionEngine::set()
{
    Poutput = 654;
    Pinput = 799;
}

float ExternalCombustionEngine::GetEfficiency()
{
    set();
    return (Poutput/Pinput)*100;
}
