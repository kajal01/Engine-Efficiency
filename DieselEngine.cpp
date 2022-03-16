#include "DieselEngine.h"

DieselEngine::DieselEngine()
{
	Pinput = 0;
	Poutput = 0;
}

DieselEngine::~DieselEngine()
{
}

void DieselEngine::set()
{
	Poutput = 342.0;
	Pinput = 876.0;
}

float DieselEngine::GetEfficiency()
{
	set();
	return (Poutput/Pinput)*100;
}
