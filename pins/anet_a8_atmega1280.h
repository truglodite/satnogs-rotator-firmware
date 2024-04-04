// Truglodite: rename to match anet a8 mainboard https://github.com/ralf-e/ANET-3D-Board-V1.0/blob/master/ANET3D_Board_Schematic.png
#define aziStep      15  // X step
#define aziDir       21  // X dir
#define aziEN        14  // XY enable
#define eleStep      22  // Y Step
#define eleDir       23  // Y Dir
#define eleEN        14  // XY enable
#define polStep      3   // Z Step
#define polDir       2   // Z Dir
#define polEN        A5  // Z enable
#define tunStep      1   // E Step
#define tunDir       0   // E Dir
// Shield has no built in pullups
#define aziMinStop   18  // X endstop
#define eleMinStop   19  // Y endstop
#define polMinStop   20  // Z endstop

#define ledExists    1   // onboard led
#define ledPin       A4  // onboard led
