#include <Bela.h>

float gKey;
float gPos;
float gGate;
float gPerc;
float gAux;

bool setup2(BelaContext *context, void *userData);
void render2(BelaContext *context, void *userData);
void cleanup2(BelaContext *context, void *userData);
void Bela_userSettings2(BelaInitSettings* settings);

void Bela_userSettings(BelaInitSettings* settings)
{
	Bela_userSettings2(settings);
}

bool setup(BelaContext *context, void *userData)
{
	return setup2(context, userData);
}
void render(BelaContext *context, void *userData)
{
	render2(context, userData);
}

void cleanup(BelaContext *context, void *userData)
{
	cleanup2(context, userData);
}
