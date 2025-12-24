cmake_minimum_required(VERSION 3.22)

project(909Serrot_Plugin VERSION 0.0.1)

add_subdirectory(modules/JUCE)

juce_add_plugin(909Serrot_Plugin
    COMPANY_NAME "909Serrot"
    IS_SYNTH FALSE
    NEEDS_MIDI_INPUT FALSE
    NEEDS_MIDI_OUTPUT FALSE
    IS_MIDI_EFFECT FALSE
    COPY_PLUGIN_AFTER_BUILD TRUE
    PLUGIN_MANUFACTURER_CODE "909S"
    PLUGIN_CODE "Ser1"
    FORMATS AU VST3 Standalone
    PRODUCT_NAME "909Serrot Plugin")

target_compile_features(909Serrot_Plugin PRIVATE cxx_std_20)

target_sources(909Serrot_Plugin
    PRIVATE
        Source/PluginProcessor.cpp
        Source/PluginProcessor.h
        Source/PluginEditor.cpp
        Source/PluginEditor.h)

target_compile_definitions(909Serrot_Plugin
    PUBLIC
        JUCE_WEB_BROWSER=0
        JUCE_USE_CURL=0)

target_link_libraries(909Serrot_Plugin
    PRIVATE
        juce::juce_audio_utils
        juce::juce_dsp
        juce::juce_gui_basics
        juce::juce_gui_extra
    PUBLIC
        juce::juce_recommended_config_flags
        juce::juce_recommended_lto_flags
        juce::juce_recommended_warning_flags)