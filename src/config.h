// USER CONFIGURATION: Edit this file to suit your specific build. Most times this is the only file that needs to be touch.

// Uncomment only one board from the list below... see boards file for more info
//If using a custom board file, leave all these commented, and use the custom board 
// setting below, and change filename to match your board file (which should be in boards)

//#define UNO_CNC_SHIELD_V_3
#define ANET_A8_ATMEGA1280_PRINTER_BOARD
//#define RAMPS_V_1_4_MEGA2560

//#include <../boards/nameofcustomboard.h> // edit and uncomment for a custom board.


#define POLARIZER              // Uncomment to enable antenna polarity rotator feature (poti from 0V to 5V)

//#define DEBUG                  // Uncomment and move debug led to troubled spot 

#define WATCHDOG                 // Disable motors if WDT is triggered


// The following lines can be uncommented and vales changed to overide default settings (default settings shown for reference)

// #define BAUDRATE           9600  // Set the Baudrate of easycomm 3 protocol (9600)

// #define AZI_RATIO          57.0  // Azimuth mechanical gear ratio
// #define AZI_MICROSTEP      16.0  // Azimuth stepper driver microstepping
// #define AZI_VMAX           300   // Antenna deg/s
// #define AZI_ACC_MAX        120   // Antenna deg/s^2
// #define AZI_MIN_ANGLE      0     // Minimum antenna azimuth angle
// #define AZI_MAX_ANGLE      360   // Maximum antenna azimuth angle

// #define ELE_RATIO          57.0  // Elevation mechanical gear ratio
// #define ELE_MICROSTEP      16.0  // Elevation stepper driver microstepping
// #define ELE_VMAX           300   // Antenna deg/s
// #define ELE_ACC_MAX        120   // Antenna deg/s^2
// #define ELE_MIN_ANGLE      0     // Minimum antenna elevation angle
// #define ELE_MAX_ANGLE      180   // Maximum antenna elevation angle

// #define POL_RATIO          57.0  // Polarization mechanical gear ratio
// #define POL_MICROSTEP      16.0  // Polarization stepper driver microstepping (built in MSx pull ups)
// #define POL_VMAX           300   // Antenna deg/s
// #define POL_ACC_MAX        120   // Antenna deg/s^2
// #define POL_MIN_ANGLE      0     // Minimum antenna polarization angle
// #define POL_MAX_ANGLE      180.0 // Maximum antenna polarization angle

// #define SPR                200.0 // Motor steps per revolution (200.0 for standard 1.8degree motors)
// #define MIN_PULSE_WIDTH    20    // uSec (for AccelStepper)
// #define DEFAULT_HOME_STATE LOW   // Low for N.O. switches and pullups
// #define HOME_DELAY         0     // millis to keep moving after hitting endstop
// #define SAMPLE_TIME        0.1   // Control loop in sec


