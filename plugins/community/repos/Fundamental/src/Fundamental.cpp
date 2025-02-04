#include "Fundamental.hpp"

RACK_PLUGIN_MODEL_DECLARE(Fundamental, 8vert);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, ADSR);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, Delay);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, LFO);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, LFO2);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, Mutes);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, SEQ3);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, SequentialSwitch1);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, SequentialSwitch2);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, Scope);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, Unity);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, VCA_1);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, VCA);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, VCF);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, VCMixer);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, VCO);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, VCO2);
RACK_PLUGIN_MODEL_DECLARE(Fundamental, Octave);

RACK_PLUGIN_INIT(Fundamental) {
   RACK_PLUGIN_INIT_ID();

   RACK_PLUGIN_INIT_WEBSITE("https://github.com/VCVRack/Fundamental");
   RACK_PLUGIN_INIT_VERSION("0.6.2");

	RACK_PLUGIN_MODEL_ADD(Fundamental, VCO);
	RACK_PLUGIN_MODEL_ADD(Fundamental, VCO2);
	RACK_PLUGIN_MODEL_ADD(Fundamental, VCF);
	RACK_PLUGIN_MODEL_ADD(Fundamental, VCA_1);
	RACK_PLUGIN_MODEL_ADD(Fundamental, VCA);
	RACK_PLUGIN_MODEL_ADD(Fundamental, LFO);
	RACK_PLUGIN_MODEL_ADD(Fundamental, LFO2);
	RACK_PLUGIN_MODEL_ADD(Fundamental, Delay);
	RACK_PLUGIN_MODEL_ADD(Fundamental, ADSR);
	RACK_PLUGIN_MODEL_ADD(Fundamental, VCMixer);
	RACK_PLUGIN_MODEL_ADD(Fundamental, 8vert);
	RACK_PLUGIN_MODEL_ADD(Fundamental, Unity);
	RACK_PLUGIN_MODEL_ADD(Fundamental, Mutes);
	RACK_PLUGIN_MODEL_ADD(Fundamental, Scope);
	RACK_PLUGIN_MODEL_ADD(Fundamental, SEQ3);
	RACK_PLUGIN_MODEL_ADD(Fundamental, SequentialSwitch1);
	RACK_PLUGIN_MODEL_ADD(Fundamental, SequentialSwitch2);
	RACK_PLUGIN_MODEL_ADD(Fundamental, Octave);
}
