#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamController_SteamController005_Init(void *);
extern bool cppISteamController_SteamController005_Shutdown(void *);
extern void cppISteamController_SteamController005_RunFrame(void *);
extern int cppISteamController_SteamController005_GetConnectedControllers(void *, ControllerHandle_t *);
extern bool cppISteamController_SteamController005_ShowBindingPanel(void *, ControllerHandle_t);
extern ControllerActionSetHandle_t cppISteamController_SteamController005_GetActionSetHandle(void *, const char *);
extern void cppISteamController_SteamController005_ActivateActionSet(void *, ControllerHandle_t, ControllerActionSetHandle_t);
extern ControllerActionSetHandle_t cppISteamController_SteamController005_GetCurrentActionSet(void *, ControllerHandle_t);
extern ControllerDigitalActionHandle_t cppISteamController_SteamController005_GetDigitalActionHandle(void *, const char *);
extern ControllerDigitalActionData_t cppISteamController_SteamController005_GetDigitalActionData(void *, ControllerHandle_t, ControllerDigitalActionHandle_t);
extern int cppISteamController_SteamController005_GetDigitalActionOrigins(void *, ControllerHandle_t, ControllerActionSetHandle_t, ControllerDigitalActionHandle_t, EControllerActionOrigin *);
extern ControllerAnalogActionHandle_t cppISteamController_SteamController005_GetAnalogActionHandle(void *, const char *);
extern ControllerAnalogActionData_t cppISteamController_SteamController005_GetAnalogActionData(void *, ControllerHandle_t, ControllerAnalogActionHandle_t);
extern int cppISteamController_SteamController005_GetAnalogActionOrigins(void *, ControllerHandle_t, ControllerActionSetHandle_t, ControllerAnalogActionHandle_t, EControllerActionOrigin *);
extern void cppISteamController_SteamController005_StopAnalogActionMomentum(void *, ControllerHandle_t, ControllerAnalogActionHandle_t);
extern void cppISteamController_SteamController005_TriggerHapticPulse(void *, ControllerHandle_t, ESteamControllerPad, unsigned short);
extern void cppISteamController_SteamController005_TriggerRepeatedHapticPulse(void *, ControllerHandle_t, ESteamControllerPad, unsigned short, unsigned short, unsigned short, unsigned int);
extern void cppISteamController_SteamController005_TriggerVibration(void *, ControllerHandle_t, unsigned short, unsigned short);
extern void cppISteamController_SteamController005_SetLEDColor(void *, ControllerHandle_t, uint8, uint8, uint8, unsigned int);
extern int cppISteamController_SteamController005_GetGamepadIndexForController(void *, ControllerHandle_t);
extern ControllerHandle_t cppISteamController_SteamController005_GetControllerForGamepadIndex(void *, int);
extern ControllerMotionData_t cppISteamController_SteamController005_GetMotionData(void *, ControllerHandle_t);
extern bool cppISteamController_SteamController005_ShowDigitalActionOrigins(void *, ControllerHandle_t, ControllerDigitalActionHandle_t, float, float, float);
extern bool cppISteamController_SteamController005_ShowAnalogActionOrigins(void *, ControllerHandle_t, ControllerAnalogActionHandle_t, float, float, float);
extern const char * cppISteamController_SteamController005_GetStringForActionOrigin(void *, EControllerActionOrigin);
extern const char * cppISteamController_SteamController005_GetGlyphForActionOrigin(void *, EControllerActionOrigin);
#ifdef __cplusplus
}
#endif
