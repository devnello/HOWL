#ifdef __OBJC__
#import <UIKit/UIKit.h>
#endif

#import "AKCompatibility.h"
#import "AKFoundation.h"
#import "AKManager.h"
#import "AKOrchestra.h"
#import "AKSettings.h"
#import "AKMidi.h"
#import "AKMidiEvent.h"
#import "AKMidiInstrument.h"
#import "AKMidiNote.h"
#import "AKInstrument.h"
#import "AKInstrumentProperty.h"
#import "AKNote.h"
#import "AKNoteProperty.h"
#import "AKParameter+Operation.h"
#import "AKTrackedAmplitude.h"
#import "AKTrackedAmplitudeFromFSignal.h"
#import "AKTrackedFrequency.h"
#import "AKTrackedFrequencyFromFSignal.h"
#import "AKCrossSynthesizedFFT.h"
#import "AKFFT.h"
#import "AKFFTProcessor.h"
#import "AKFFTTableReader.h"
#import "AKFFTTableWriter.h"
#import "AKFilteredFFT.h"
#import "AKMaskedFFT.h"
#import "AKMixedFFT.h"
#import "AKPhaseLockedVocoder.h"
#import "AKResynthesizedAudio.h"
#import "AKScaledFFT.h"
#import "AKSpectralVocoder.h"
#import "AKWarpedFFT.h"
#import "AKAdditiveCosines.h"
#import "AKAssignment.h"
#import "AKDifference.h"
#import "AKInverse.h"
#import "AKMaximum.h"
#import "AKMinimum.h"
#import "AKMultipleInputMathOperation.h"
#import "AKProduct.h"
#import "AKSingleInputMathOperation.h"
#import "AKSum.h"
#import "AKTableValue.h"
#import "AKADSREnvelope.h"
#import "AKLine.h"
#import "AKLinearADSREnvelope.h"
#import "AKLinearEnvelope.h"
#import "AKGranularSynthesisTexture.h"
#import "AKGranularSynthesizer.h"
#import "AKSinusoidBursts.h"
#import "AKMonoSoundFileLooper.h"
#import "AKStereoSoundFileLooper.h"
#import "AKTableLooper.h"
#import "AKPortamento.h"
#import "AKVibrato.h"
#import "AKFMOscillator.h"
#import "AKLowFrequencyOscillator.h"
#import "AKOscillator.h"
#import "AKPhasor.h"
#import "AKVCOscillator.h"
#import "AKMandolin.h"
#import "AKMarimba.h"
#import "AKPluckedString.h"
#import "AKStruckMetalBar.h"
#import "AKVibes.h"
#import "AKBambooSticks.h"
#import "AKCabasa.h"
#import "AKCrunch.h"
#import "AKDroplet.h"
#import "AKGuiro.h"
#import "AKSandPaper.h"
#import "AKSekere.h"
#import "AKSleighbells.h"
#import "AKStick.h"
#import "AKTambourine.h"
#import "AKBeatenPlate.h"
#import "AKBowedString.h"
#import "AKFlute.h"
#import "AKSimpleWaveGuideModel.h"
#import "AKInterpolatedRandomNumberPulse.h"
#import "AKJitter.h"
#import "AKNoise.h"
#import "AKRandomNumbers.h"
#import "AKSegmentArray.h"
#import "AKSegmentArrayLoop.h"
#import "AKAudioInput.h"
#import "AKAudioOutput.h"
#import "AKFileInput.h"
#import "AKLog.h"
#import "AKMidiInput.h"
#import "AKMonoFileInput.h"
#import "AKMP3FileInput.h"
#import "AKParameterChangeLog.h"
#import "AKConvolution.h"
#import "AKStereoConvolution.h"
#import "AKDelay.h"
#import "AKMultitapDelay.h"
#import "AKVariableDelay.h"
#import "AKCompressor.h"
#import "AKCompressorExpander.h"
#import "AKDistortion.h"
#import "AKDopplerEffect.h"
#import "AKFlanger.h"
#import "AKPitchShifter.h"
#import "AKRingModulator.h"
#import "AKAntiresonantFilter.h"
#import "AKClipper.h"
#import "AKCombFilter.h"
#import "AKDCBlock.h"
#import "AKDecimator.h"
#import "AKDeclick.h"
#import "AKEqualizerFilter.h"
#import "AKHighPassFilter.h"
#import "AKHilbertTransformer.h"
#import "AKLowPassFilter.h"
#import "AKMoogLadder.h"
#import "AKMoogVCF.h"
#import "AKResonantFilter.h"
#import "AKStringResonator.h"
#import "AKThreePoleLowpassFilter.h"
#import "AKVariableFrequencyResponseBandPassFilter.h"
#import "AKBandPassButterworthFilter.h"
#import "AKBandRejectButterworthFilter.h"
#import "AKHighPassButterworthFilter.h"
#import "AKLowPassButterworthFilter.h"
#import "AKHighShelfParametricEqualizerFilter.h"
#import "AKLowShelfParametricEqualizerFilter.h"
#import "AKPeakingParametricEqualizerFilter.h"
#import "AKBallWithinTheBoxReverb.h"
#import "AKFlatFrequencyResponseReverb.h"
#import "AKParallelCombLowPassFilterReverb.h"
#import "AKReverb.h"
#import "AK3DBinauralAudio.h"
#import "AKBalance.h"
#import "AKMix.h"
#import "AKPanner.h"
#import "AKAudio.h"
#import "AKConstant.h"
#import "AKControl.h"
#import "AKFSignal.h"
#import "AKParameter.h"
#import "AKStereoAudio.h"
#import "AKEvent.h"
#import "AKPhrase.h"
#import "AKSequence.h"
#import "AKSoundFont.h"
#import "AKSoundFontInstrument.h"
#import "AKSoundFontInstrumentPlayer.h"
#import "AKSoundFontPreset.h"
#import "AKSoundFontPresetPlayer.h"
#import "AKSoundFileTable.h"
#import "AKTable.h"
#import "AKExponentialTableGenerator.h"
#import "AKFourierSeriesTableGenerator.h"
#import "AKHarmonicCosineTableGenerator.h"
#import "AKLineTableGenerator.h"
#import "AKRandomDistributionTableGenerator.h"
#import "AKTableGenerator.h"
#import "AKWindowTableGenerator.h"
#import "AKSampler.h"
#import "AKTools.h"
#import "AKAmplifier.h"
#import "AKStereoAmplifier.h"
#import "AKAudioAnalyzer.h"
#import "AKBambooSticksInstrument.h"
#import "AKMandolinInstrument.h"
#import "AKMarimbaInstrument.h"
#import "AKPluckedStringInstrument.h"
#import "AKSekereInstrument.h"
#import "AKSleighbellsInstrument.h"
#import "AKStickInstrument.h"
#import "AKStruckMetalBarInstrument.h"
#import "AKTambourineInstrument.h"
#import "AKVibraphoneInstrument.h"
#import "AKAudioFilePlayer.h"
#import "AKStereoAudioFilePlayer.h"
#import "AKMicrophone.h"
#import "AKDelayPedal.h"
#import "AKPitchShifterPedal.h"
#import "AKReverbPedal.h"
#import "AKFMOscillatorInstrument.h"
#import "AKVCOscillatorInstrument.h"
#import "AKBeatClock.h"
#import "AKAudioFFTPlot.h"
#import "AKAudioInputFFTPlot.h"
#import "AKAudioInputPlot.h"
#import "AKAudioInputRollingWaveformPlot.h"
#import "AKAudioOutputFFTPlot.h"
#import "AKAudioOutputPlot.h"
#import "AKAudioOutputRollingWaveformPlot.h"
#import "AKAudioPlot.h"
#import "AKAudioRollingWaveformPlot.h"
#import "AKFloatPlot.h"
#import "AKInstrumentPropertyPlot.h"
#import "AKPlotView.h"
#import "AKStereoOutputPlot.h"
#import "AKTablePlot.h"
#import "EZAudio.h"
#import "EZAudioDisplayLink.h"
#import "EZAudioFFT.h"
#import "EZAudioFloatConverter.h"
#import "EZAudioFloatData.h"
#import "EZAudioPlot.h"
#import "EZAudioUtilities.h"
#import "EZPlot.h"
#import "TPCircularBuffer.h"
#import "AKLevelMeter.h"
#import "AKPropertyLabel.h"
#import "AKPropertySlider.h"
#import "CsoundObj.h"

FOUNDATION_EXPORT double AudioKitVersionNumber;
FOUNDATION_EXPORT const unsigned char AudioKitVersionString[];

