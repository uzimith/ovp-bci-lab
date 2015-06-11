
#include <vector>
#include <openvibe/ov_all.h>
#include "ovp_defines.h"

#include "box-algorithms/generate-stimulation/ovpCBoxAlgorithmGenerateStimulation.h"
#include "box-algorithms/label-target/ovpCBoxAlgorithmLabelTarget.h"
#include "box-algorithms/udp-sender/ovpCBoxAlgorithmUDPSender.h"
#include "box-algorithms/ovpCBoxAlgorithmP300IdentifierStimulatorModified.h"

OVP_Declare_Begin();
	OVP_Declare_New(OpenViBEPlugins::Tools::CBoxAlgorithmLabelTargetDesc);
	OVP_Declare_New(OpenViBEPlugins::Tools::CBoxAlgorithmGenerateStimulationDesc);
	OVP_Declare_New(OpenViBEPlugins::NetworkIO::CBoxAlgorithmUDPSenderDesc);
	OVP_Declare_New(OpenViBEPlugins::Stimulation::CBoxAlgorithmP300IdentifierStimulatorModifiedDesc);
OVP_Declare_End();
