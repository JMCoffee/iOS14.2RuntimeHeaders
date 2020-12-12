/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

@interface AXUISettingsNumericalPickerViewController : AXUISettingsSetupCapableListController <AXUISettingsEditableTableCellWithStepperDelegate> {
    double  _cachedNumericalValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_delayPickerFooterSpecifier;
- (id)_delayPickerSpecifier;
- (id)delayEnabled:(id)arg1;
- (id)localizedFooterText;
- (id)localizedPickerFooterText;
- (id)localizedTextForValue:(double)arg1;
- (id)localizedTitle;
- (double)maximumValue;
- (double)maximumValueForSpecifier:(id)arg1;
- (double)minimumValue;
- (double)minimumValueForSpecifier:(id)arg1;
- (bool)numericalPreferenceEnabled;
- (double)numericalPreferenceValue;
- (void)setDelayEnabled:(id)arg1 specifier:(id)arg2;
- (void)setNumericalPreferenceEnabledFromUser:(bool)arg1;
- (void)setNumericalPreferenceValueFromUser:(double)arg1;
- (bool)shouldDisablePreferenceEntirely;
- (bool)shouldSaveOnExit;
- (void)specifier:(id)arg1 setValue:(double)arg2;
- (id)specifiers;
- (double)stepAmount;
- (double)stepValueForSpecifier:(id)arg1;
- (id)stringValueForSpecifier:(id)arg1;
- (bool)userCanDisableNumericalPreference;
- (double)valueForSpecifier:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end