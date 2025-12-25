
#ifndef ERAPROCESSOR_H
#define ERAPROCESSOR_H
#pragma once

#include <juce_audio_basics/juce_audio_basics.h>
#include "../IDspModule.h"

class EraProcessor : public IDspModule
{
public:
    EraProcessor();
    ~EraProcessor() override;

    void prepare(const juce::dsp::ProcessSpec& spec) override;
    void process(juce::AudioBuffer<float>& buffer) override;
    void reset() override;

private:
    int downsampleFactor = 1;
};
#endif //ERAPROCESSOR_H
