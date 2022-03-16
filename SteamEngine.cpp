#include "SteamEngine.h"

SteamEngine::SteamEngine()
{
    Pinput = 0;
    Poutput = 0;
}

SteamEngine::~SteamEngine()
{
}

void SteamEngine::set()
{
    Poutput = 654;
    Pinput = 799;
}

float SteamEngine::GetEfficiency()
{
    set();
    return (Poutput/Pinput)*100;
}
