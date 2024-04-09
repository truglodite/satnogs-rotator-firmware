
// The beginnings of the semi-automated config system, allowing config.h to only require a few lines for average user.
// Config.h can overide any setting here, do not edit this file!
// much of globals.h will migrate here over time

#include <../src/config.h>

#ifdef UNO_CNC_SHIELD_V_3
    #include <../boards/unoCncV3.h>
#endif
#ifdef ANET_A8_ATMEGA1280_PRINTER_BOARD
    #include <../boards/anet_a8_atmega1280.h>
    // A8 motherboard has all MSx pins hardwired to Vcc, so 16 microsteps only!
    #if (AZI_MICROSTEP != 16 || ELE_MICROSTEP != 16 || POL_MICROSTEP != 16)
        #error XXX_MICROSTEP != 16... A8 board is hardwired with 16 microsteps!!!
    #endif
#endif
#ifdef RAMPS_V_1_4_MEGA2560
    #include <../boards/ramps_V_1_4.h>
#endif
#ifdef TEENSY_UNO_CNC_SHIELD_V_3
    #include <../boards/unoCncV3.h>
#endif

#ifdef POLARIZER
    #ifndef POL_POT_HYSTERESIS
        #define POL_POT_HYSTERESIS  1   // Increase to eliminate polarize axis shaking while poti is not moved
    #endif
    #ifndef POL_POT_SAMPLES
        #define POL_POT_SAMPLES   4       // Number of averaged polpot samples used for smoothing
    #endif
#endif

#ifndef BAUDRATE
    #define BAUDRATE           9600  // Set the Baudrate of easycomm 3 protocol (9600)
#endif
#ifndef AZI_RATIO
    #define AZI_RATIO          57    // Azimuth mechanical gear ratio
#endif
#ifndef AZI_MICROSTEP
    #define AZI_MICROSTEP      1     // Azimuth stepper driver microstepping
#endif
#ifndef AZI_VMAX
    #define AZI_VMAX           45.0  // Antenna deg/s
#endif
#ifndef AZI_ACC_MAX
    #define AZI_ACC_MAX        120.0 // Antenna deg/s^2
#endif
#ifndef AZI_MIN_ANGLE
    #define AZI_MIN_ANGLE      0.0   // Minimum antenna azimuth angle
#endif
#ifndef AZI_MAX_ANGLE
    #define AZI_MAX_ANGLE      360.0 // Maximum antenna azimuth angle
#endif
#ifdef PARKING
    #ifndef AZI_PARK_ANGLE
        #define AZI_PARK_ANGLE 90.0  // Antenna azimuth parking position
    #endif
#endif

#ifndef ELE_RATIO
    #define ELE_RATIO          57    // Elevation mechanical gear ratio
#endif
#ifndef ELE_MICROSTEP
    #define ELE_MICROSTEP      1     // Elevation stepper driver microstepping
#endif
#ifndef ELE_VMAX
    #define ELE_VMAX           45.0  // Antenna deg/s
#endif
#ifndef ELE_ACC_MAX
    #define ELE_ACC_MAX        120.0 // Antenna deg/s^2
#endif
#ifndef ELE_MIN_ANGLE
    #define ELE_MIN_ANGLE      0.0   // Minimum antenna elevation angle
#endif
#ifndef ELE_MAX_ANGLE
    #define ELE_MAX_ANGLE      180.0 // Maximum antenna elevation angle
#endif
#ifdef PARKING
    #ifndef ELE_PARK_ANGLE
        #define ELE_PARK_ANGLE -5.0  // Antenna elevation parking position
    #endif
#endif

#ifndef POL_RATIO
    #define POL_RATIO          3     // Polarization mechanical gear ratio
#endif
#ifndef POL_MICROSTEP
#   define POL_MICROSTEP       1     // Polarization stepper driver microstepping
#endif
#ifndef POL_VMAX
    #define POL_VMAX           180.0 // Antenna deg/s
#endif
#ifndef POL_ACC_MAX
    #define POL_ACC_MAX        120.0 // Antenna deg/s^2
#endif
#ifndef POL_MIN_ANGLE
    #define POL_MIN_ANGLE      0.0   // Minimum antenna polarization angle
#endif
#ifndef POL_MAX_ANGLE
    #define POL_MAX_ANGLE      180.0 // Maximum antenna polarization angle
#endif
#ifdef PARKING
    #ifndef POL_PARK_ANGLE
        #define POL_PARK_ANGLE 0.0   // Antenna polarizer parking position
    #endif
#endif

#ifndef SPR
    #define SPR                200   // Motor steps per revolution (200.0 for standard 1.8degree motors)
#endif
#ifndef MIN_PULSE_WIDTH
    #define MIN_PULSE_WIDTH    20    // uSec (for AccelStepper)
#endif
#ifndef DEFAULT_HOME_STATE
    #define DEFAULT_HOME_STATE LOW   // Low for N.O. switches and pullups
#endif
#ifndef HOME_DELAY
    #define HOME_DELAY         2000  // millis to keep moving after hitting all endstops while homing
#endif
#ifndef SAMPLE_TIME
    #define SAMPLE_TIME        0.1   // Control loop in sec
#endif

#ifdef TEENSY_UNO_CNC_SHIELD_V_3    // remove watchdog for Teensy boards
    #ifdef WATCHDOG
        #undef WATCHDOG
    #endif
#endif
#ifndef TEENSY_UNO_CNC_SHIELD_V_3
    #ifdef WATCHDOG
        #include <../lib/watchdog.h>
    #endif
#endif