#include "PetrolEngine.h"

PetrolEngine::PetrolEngine()
{
	Pinput = 0;
	Poutput = 0;
}

PetrolEngine::~PetrolEngine()
{
}

void PetrolEngine::set()
{
	Poutput = 5234;
	Pinput = 9876;
}

float PetrolEngine::GetEfficiency()
{
	set();
	return (Poutput/Pinput)*100;
}
