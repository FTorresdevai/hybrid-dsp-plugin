//
// Created by Francisco on 25/12/2025.
//

#include "ParameterLayout.h"

juce::AudioProcessorValueTreeState::ParameterLayout Parameters::createParameterLayout()
{
    std::vector<std::unique_ptr<juce::RangedAudioParameter>> params;

    //exemplo para completar estrutura
    params.push_back(std::make_unique<juce::AudioParameterFloat>(
        "era_age", "Age", 0.0f, 1.0f, 0.0f));

    return { params.begin(), params.end() };
}