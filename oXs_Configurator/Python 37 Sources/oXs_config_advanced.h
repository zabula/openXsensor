#ifndef OXS_CONFIG_ADVANCED_h
#define OXS_CONFIG_ADVANCED_h

#define PIN_SERIALTX 4

#define         DATA_ID_VARIO  0x00
#define         DATA_ID_FLVSS  0xA1
#define         DATA_ID_FAS    0x22
#define         DATA_ID_GPS    0x83
#define         DATA_ID_RPM    0xE4
#define         DATA_ID_ACC    0x67
#define         DATA_ID_TX     0x0D

#define FILL_TEST_3_WITH_EXPECTED_ALT

#define EXPECTED_ALT_AT_SEC 1.5

#define FILL_TEST_1_WITH_DTE

#define FILL_TEST_2_WITH_PPM_AIRSPEED_COMPENSATION

#define FILL_TEST_1_WITH_YAWRATE

#define FILL_TEST1_WITH_HEADING_FROM_MAGNETOMETER

#define FILL_TEST_1_2_3_WITH_FLOW_SENSOR_CONSUMPTION

#define PIN_PPM 2
#define PPM_MIN_100 1000
#define PPM_MIN_100 2000

#define SECOND_BARO_SENSOR_USE    NO_BARO

#define SENSITIVITY_MIN 80
#define SENSITIVITY_MAX 300
#define SENSITIVITY_MIN_AT 100
#define SENSITIVITY_MAX_AT 1000

#define VARIOHYSTERESIS 5

#define PIN_ANALOG_VSPEED 3
#define ANALOG_VSPEED_MIN  -3.0
#define ANALOG_VSPEED_MAX  3.0

#define AIRSPEED_RESET_AT_PPM 100

#define COMPENSATION_MIN_AT_PPM 60

#define COMPENSATION_MAX_AT_PPM 90

#define COMPENSATION_MIN 80

#define COMPENSATION_MAX 140

#define USE_INTERNAL_REFERENCE

#define PIN_VOLTAGE  0 ,  1 ,  2 , 8 , 8 , 8
#define RESISTOR_TO_GROUND 10.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
#define RESISTOR_TO_VOLTAGE 20.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
#define OFFSET_VOLTAGE 40.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
#define SCALE_VOLTAGE 30.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0

#define PIN_CURRENTSENSOR 1
#define MVOLT_AT_ZERO_AMP 1.0
#define MVOLT_PER_AMP     2.0
#define RESISTOR_TO_GROUND_FOR_CURRENT 3.0
#define RESISTOR_TO_CURRENT_SENSOR     3.0
#define PULSES_PER_ROTATION 3

#define GPS_SPEED_3D
#define GPS_REFRESH_RATE 10

#endif
