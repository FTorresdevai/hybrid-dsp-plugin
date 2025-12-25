
#ifndef PARAMETERLAYOUT_H
#define PARAMETERLAYOUT_H
#pragma once

#include <juce_audio_processors/juce_audio_processors.h>

namespace Parameters
{
    juce::AudioProcessorValueTreeState::ParameterLayout createParameterLayout();
}
#endif //PARAMETERLAYOUT_H
