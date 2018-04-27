/*
* This file was autogenerated using the "odrivetool generate-code" feature.
*
* The file matches a specific firmware version. If you add/remove/rename any
* properties exposed by the ODrive, this file needs to be regenerated, otherwise
* the ODrive will ignore all commands.
*/

#ifndef __ODRIVE_ENDPOINTS_HPP
#define __ODRIVE_ENDPOINTS_HPP


namespace odrive {
    
static constexpr const uint16_t json_crc = 0x7199;

enum { 
  VBUS_VOLTAGE = 1,
  SERIAL_NUMBER = 2,
  HW_VERSION_MAJOR = 3,
  HW_VERSION_MINOR = 4,
  HW_VERSION_VARIANT = 5,
  FW_VERSION_MAJOR = 6,
  FW_VERSION_MINOR = 7,
  FW_VERSION_REVISION = 8,
  FW_VERSION_UNRELEASED = 9,
  USER_CONFIG_LOADED = 10,
  BRAKE_RESISTOR_ARMED = 11,
  SYSTEM_STATS__UPTIME = 12,
  SYSTEM_STATS__MIN_HEAP_SPACE = 13,
  SYSTEM_STATS__MIN_STACK_SPACE_AXIS0 = 14,
  SYSTEM_STATS__MIN_STACK_SPACE_AXIS1 = 15,
  SYSTEM_STATS__MIN_STACK_SPACE_COMMS = 16,
  SYSTEM_STATS__MIN_STACK_SPACE_USB = 17,
  SYSTEM_STATS__MIN_STACK_SPACE_UART = 18,
  SYSTEM_STATS__MIN_STACK_SPACE_USB_IRQ = 19,
  SYSTEM_STATS__MIN_STACK_SPACE_STARTUP = 20,
  SYSTEM_STATS__USB__RX_CNT = 21,
  SYSTEM_STATS__USB__TX_CNT = 22,
  SYSTEM_STATS__USB__TX_OVERRUN_CNT = 23,
  SYSTEM_STATS__I2C__ADDR = 24,
  SYSTEM_STATS__I2C__ADDR_MATCH_CNT = 25,
  SYSTEM_STATS__I2C__RX_CNT = 26,
  SYSTEM_STATS__I2C__ERROR_CNT = 27,
  CONFIG__BRAKE_RESISTANCE = 28,
  CONFIG__ENABLE_UART = 29,
  CONFIG__ENABLE_I2C_INSTEAD_OF_CAN = 30,
  CONFIG__DC_BUS_UNDERVOLTAGE_TRIP_LEVEL = 31,
  CONFIG__DC_BUS_OVERVOLTAGE_TRIP_LEVEL = 32,
  AXIS0__ERROR = 33,
  AXIS0__ENABLE_STEP_DIR = 34,
  AXIS0__CURRENT_STATE = 35,
  AXIS0__REQUESTED_STATE = 36,
  AXIS0__LOOP_COUNTER = 37,
  AXIS0__CONFIG__STARTUP_MOTOR_CALIBRATION = 38,
  AXIS0__CONFIG__STARTUP_ENCODER_INDEX_SEARCH = 39,
  AXIS0__CONFIG__STARTUP_ENCODER_OFFSET_CALIBRATION = 40,
  AXIS0__CONFIG__STARTUP_CLOSED_LOOP_CONTROL = 41,
  AXIS0__CONFIG__STARTUP_SENSORLESS_CONTROL = 42,
  AXIS0__CONFIG__ENABLE_STEP_DIR = 43,
  AXIS0__CONFIG__COUNTS_PER_STEP = 44,
  AXIS0__CONFIG__RAMP_UP_TIME = 45,
  AXIS0__CONFIG__RAMP_UP_DISTANCE = 46,
  AXIS0__CONFIG__SPIN_UP_CURRENT = 47,
  AXIS0__CONFIG__SPIN_UP_ACCELERATION = 48,
  AXIS0__CONFIG__SPIN_UP_TARGET_VEL = 49,
  AXIS0__MOTOR__ERROR = 50,
  AXIS0__MOTOR__ARMED_STATE = 51,
  AXIS0__MOTOR__IS_CALIBRATED = 52,
  AXIS0__MOTOR__CURRENT_MEAS_PHB = 53,
  AXIS0__MOTOR__CURRENT_MEAS_PHC = 54,
  AXIS0__MOTOR__DC_CALIB_PHB = 55,
  AXIS0__MOTOR__DC_CALIB_PHC = 56,
  AXIS0__MOTOR__PHASE_CURRENT_REV_GAIN = 57,
  AXIS0__MOTOR__CURRENT_CONTROL__P_GAIN = 58,
  AXIS0__MOTOR__CURRENT_CONTROL__I_GAIN = 59,
  AXIS0__MOTOR__CURRENT_CONTROL__V_CURRENT_CONTROL_INTEGRAL_D = 60,
  AXIS0__MOTOR__CURRENT_CONTROL__V_CURRENT_CONTROL_INTEGRAL_Q = 61,
  AXIS0__MOTOR__CURRENT_CONTROL__IBUS = 62,
  AXIS0__MOTOR__CURRENT_CONTROL__FINAL_V_ALPHA = 63,
  AXIS0__MOTOR__CURRENT_CONTROL__FINAL_V_BETA = 64,
  AXIS0__MOTOR__CURRENT_CONTROL__IQ_SETPOINT = 65,
  AXIS0__MOTOR__CURRENT_CONTROL__IQ_MEASURED = 66,
  AXIS0__MOTOR__CURRENT_CONTROL__MAX_ALLOWED_CURRENT = 67,
  AXIS0__MOTOR__GATE_DRIVER__DRV_FAULT = 68,
  AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_GENERAL = 69,
  AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_ADC_CB_I = 70,
  AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_ADC_CB_DC = 71,
  AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_MEAS_R = 72,
  AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_MEAS_L = 73,
  AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_ENC_CALIB = 74,
  AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_IDX_SEARCH = 75,
  AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_FOC_VOLTAGE = 76,
  AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_FOC_CURRENT = 77,
  AXIS0__MOTOR__CONFIG__PRE_CALIBRATED = 78,
  AXIS0__MOTOR__CONFIG__POLE_PAIRS = 79,
  AXIS0__MOTOR__CONFIG__CALIBRATION_CURRENT = 80,
  AXIS0__MOTOR__CONFIG__RESISTANCE_CALIB_MAX_VOLTAGE = 81,
  AXIS0__MOTOR__CONFIG__PHASE_INDUCTANCE = 82,
  AXIS0__MOTOR__CONFIG__PHASE_RESISTANCE = 83,
  AXIS0__MOTOR__CONFIG__DIRECTION = 84,
  AXIS0__MOTOR__CONFIG__MOTOR_TYPE = 85,
  AXIS0__MOTOR__CONFIG__CURRENT_LIM = 86,
  AXIS0__CONTROLLER__POS_SETPOINT = 87,
  AXIS0__CONTROLLER__VEL_SETPOINT = 88,
  AXIS0__CONTROLLER__VEL_INTEGRATOR_CURRENT = 89,
  AXIS0__CONTROLLER__CURRENT_SETPOINT = 90,
  AXIS0__CONTROLLER__CONFIG__CONTROL_MODE = 91,
  AXIS0__CONTROLLER__CONFIG__POS_GAIN = 92,
  AXIS0__CONTROLLER__CONFIG__VEL_GAIN = 93,
  AXIS0__CONTROLLER__CONFIG__VEL_INTEGRATOR_GAIN = 94,
  AXIS0__CONTROLLER__CONFIG__VEL_LIMIT = 95,
  AXIS0__CONTROLLER__START_ANTICOGGING_CALIBRATION = 105,
  AXIS0__ENCODER__ERROR = 106,
  AXIS0__ENCODER__IS_READY = 107,
  AXIS0__ENCODER__INDEX_FOUND = 108,
  AXIS0__ENCODER__SHADOW_COUNT = 109,
  AXIS0__ENCODER__COUNT_IN_CPR = 110,
  AXIS0__ENCODER__OFFSET = 111,
  AXIS0__ENCODER__PHASE = 112,
  AXIS0__ENCODER__POS_ESTIMATE = 113,
  AXIS0__ENCODER__POS_CPR = 114,
  AXIS0__ENCODER__PLL_VEL = 115,
  AXIS0__ENCODER__PLL_KP = 116,
  AXIS0__ENCODER__PLL_KI = 117,
  AXIS0__ENCODER__CONFIG__USE_INDEX = 118,
  AXIS0__ENCODER__CONFIG__PRE_CALIBRATED = 119,
  AXIS0__ENCODER__CONFIG__IDX_SEARCH_SPEED = 120,
  AXIS0__ENCODER__CONFIG__CPR = 121,
  AXIS0__ENCODER__CONFIG__OFFSET = 122,
  AXIS0__ENCODER__CONFIG__CALIB_RANGE = 123,
  AXIS0__SENSORLESS_ESTIMATOR__ERROR = 124,
  AXIS0__SENSORLESS_ESTIMATOR__PHASE = 125,
  AXIS0__SENSORLESS_ESTIMATOR__PLL_POS = 126,
  AXIS0__SENSORLESS_ESTIMATOR__PLL_VEL = 127,
  AXIS0__SENSORLESS_ESTIMATOR__PLL_KP = 128,
  AXIS0__SENSORLESS_ESTIMATOR__PLL_KI = 129,
  AXIS1__ERROR = 130,
  AXIS1__ENABLE_STEP_DIR = 131,
  AXIS1__CURRENT_STATE = 132,
  AXIS1__REQUESTED_STATE = 133,
  AXIS1__LOOP_COUNTER = 134,
  AXIS1__CONFIG__STARTUP_MOTOR_CALIBRATION = 135,
  AXIS1__CONFIG__STARTUP_ENCODER_INDEX_SEARCH = 136,
  AXIS1__CONFIG__STARTUP_ENCODER_OFFSET_CALIBRATION = 137,
  AXIS1__CONFIG__STARTUP_CLOSED_LOOP_CONTROL = 138,
  AXIS1__CONFIG__STARTUP_SENSORLESS_CONTROL = 139,
  AXIS1__CONFIG__ENABLE_STEP_DIR = 140,
  AXIS1__CONFIG__COUNTS_PER_STEP = 141,
  AXIS1__CONFIG__RAMP_UP_TIME = 142,
  AXIS1__CONFIG__RAMP_UP_DISTANCE = 143,
  AXIS1__CONFIG__SPIN_UP_CURRENT = 144,
  AXIS1__CONFIG__SPIN_UP_ACCELERATION = 145,
  AXIS1__CONFIG__SPIN_UP_TARGET_VEL = 146,
  AXIS1__MOTOR__ERROR = 147,
  AXIS1__MOTOR__ARMED_STATE = 148,
  AXIS1__MOTOR__IS_CALIBRATED = 149,
  AXIS1__MOTOR__CURRENT_MEAS_PHB = 150,
  AXIS1__MOTOR__CURRENT_MEAS_PHC = 151,
  AXIS1__MOTOR__DC_CALIB_PHB = 152,
  AXIS1__MOTOR__DC_CALIB_PHC = 153,
  AXIS1__MOTOR__PHASE_CURRENT_REV_GAIN = 154,
  AXIS1__MOTOR__CURRENT_CONTROL__P_GAIN = 155,
  AXIS1__MOTOR__CURRENT_CONTROL__I_GAIN = 156,
  AXIS1__MOTOR__CURRENT_CONTROL__V_CURRENT_CONTROL_INTEGRAL_D = 157,
  AXIS1__MOTOR__CURRENT_CONTROL__V_CURRENT_CONTROL_INTEGRAL_Q = 158,
  AXIS1__MOTOR__CURRENT_CONTROL__IBUS = 159,
  AXIS1__MOTOR__CURRENT_CONTROL__FINAL_V_ALPHA = 160,
  AXIS1__MOTOR__CURRENT_CONTROL__FINAL_V_BETA = 161,
  AXIS1__MOTOR__CURRENT_CONTROL__IQ_SETPOINT = 162,
  AXIS1__MOTOR__CURRENT_CONTROL__IQ_MEASURED = 163,
  AXIS1__MOTOR__CURRENT_CONTROL__MAX_ALLOWED_CURRENT = 164,
  AXIS1__MOTOR__GATE_DRIVER__DRV_FAULT = 165,
  AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_GENERAL = 166,
  AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_ADC_CB_I = 167,
  AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_ADC_CB_DC = 168,
  AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_MEAS_R = 169,
  AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_MEAS_L = 170,
  AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_ENC_CALIB = 171,
  AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_IDX_SEARCH = 172,
  AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_FOC_VOLTAGE = 173,
  AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_FOC_CURRENT = 174,
  AXIS1__MOTOR__CONFIG__PRE_CALIBRATED = 175,
  AXIS1__MOTOR__CONFIG__POLE_PAIRS = 176,
  AXIS1__MOTOR__CONFIG__CALIBRATION_CURRENT = 177,
  AXIS1__MOTOR__CONFIG__RESISTANCE_CALIB_MAX_VOLTAGE = 178,
  AXIS1__MOTOR__CONFIG__PHASE_INDUCTANCE = 179,
  AXIS1__MOTOR__CONFIG__PHASE_RESISTANCE = 180,
  AXIS1__MOTOR__CONFIG__DIRECTION = 181,
  AXIS1__MOTOR__CONFIG__MOTOR_TYPE = 182,
  AXIS1__MOTOR__CONFIG__CURRENT_LIM = 183,
  AXIS1__CONTROLLER__POS_SETPOINT = 184,
  AXIS1__CONTROLLER__VEL_SETPOINT = 185,
  AXIS1__CONTROLLER__VEL_INTEGRATOR_CURRENT = 186,
  AXIS1__CONTROLLER__CURRENT_SETPOINT = 187,
  AXIS1__CONTROLLER__CONFIG__CONTROL_MODE = 188,
  AXIS1__CONTROLLER__CONFIG__POS_GAIN = 189,
  AXIS1__CONTROLLER__CONFIG__VEL_GAIN = 190,
  AXIS1__CONTROLLER__CONFIG__VEL_INTEGRATOR_GAIN = 191,
  AXIS1__CONTROLLER__CONFIG__VEL_LIMIT = 192,
  AXIS1__CONTROLLER__START_ANTICOGGING_CALIBRATION = 202,
  AXIS1__ENCODER__ERROR = 203,
  AXIS1__ENCODER__IS_READY = 204,
  AXIS1__ENCODER__INDEX_FOUND = 205,
  AXIS1__ENCODER__SHADOW_COUNT = 206,
  AXIS1__ENCODER__COUNT_IN_CPR = 207,
  AXIS1__ENCODER__OFFSET = 208,
  AXIS1__ENCODER__PHASE = 209,
  AXIS1__ENCODER__POS_ESTIMATE = 210,
  AXIS1__ENCODER__POS_CPR = 211,
  AXIS1__ENCODER__PLL_VEL = 212,
  AXIS1__ENCODER__PLL_KP = 213,
  AXIS1__ENCODER__PLL_KI = 214,
  AXIS1__ENCODER__CONFIG__USE_INDEX = 215,
  AXIS1__ENCODER__CONFIG__PRE_CALIBRATED = 216,
  AXIS1__ENCODER__CONFIG__IDX_SEARCH_SPEED = 217,
  AXIS1__ENCODER__CONFIG__CPR = 218,
  AXIS1__ENCODER__CONFIG__OFFSET = 219,
  AXIS1__ENCODER__CONFIG__CALIB_RANGE = 220,
  AXIS1__SENSORLESS_ESTIMATOR__ERROR = 221,
  AXIS1__SENSORLESS_ESTIMATOR__PHASE = 222,
  AXIS1__SENSORLESS_ESTIMATOR__PLL_POS = 223,
  AXIS1__SENSORLESS_ESTIMATOR__PLL_VEL = 224,
  AXIS1__SENSORLESS_ESTIMATOR__PLL_KP = 225,
  AXIS1__SENSORLESS_ESTIMATOR__PLL_KI = 226,
  TEST_PROPERTY = 227,
  SAVE_CONFIGURATION = 234,
  ERASE_CONFIGURATION = 235,
  REBOOT = 236,
  ENTER_DFU_MODE = 237,
};

template<int I>
struct endpoint_type;

template<> struct endpoint_type<VBUS_VOLTAGE> { typedef float type; };
template<> struct endpoint_type<SERIAL_NUMBER> { typedef uint64_t type; };
template<> struct endpoint_type<HW_VERSION_MAJOR> { typedef uint8_t type; };
template<> struct endpoint_type<HW_VERSION_MINOR> { typedef uint8_t type; };
template<> struct endpoint_type<HW_VERSION_VARIANT> { typedef uint8_t type; };
template<> struct endpoint_type<FW_VERSION_MAJOR> { typedef uint8_t type; };
template<> struct endpoint_type<FW_VERSION_MINOR> { typedef uint8_t type; };
template<> struct endpoint_type<FW_VERSION_REVISION> { typedef uint8_t type; };
template<> struct endpoint_type<FW_VERSION_UNRELEASED> { typedef uint8_t type; };
template<> struct endpoint_type<USER_CONFIG_LOADED> { typedef bool type; };
template<> struct endpoint_type<BRAKE_RESISTOR_ARMED> { typedef bool type; };
template<> struct endpoint_type<SYSTEM_STATS__UPTIME> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_HEAP_SPACE> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_STACK_SPACE_AXIS0> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_STACK_SPACE_AXIS1> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_STACK_SPACE_COMMS> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_STACK_SPACE_USB> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_STACK_SPACE_UART> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_STACK_SPACE_USB_IRQ> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_STACK_SPACE_STARTUP> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__USB__RX_CNT> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__USB__TX_CNT> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__USB__TX_OVERRUN_CNT> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__I2C__ADDR> { typedef uint8_t type; };
template<> struct endpoint_type<SYSTEM_STATS__I2C__ADDR_MATCH_CNT> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__I2C__RX_CNT> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__I2C__ERROR_CNT> { typedef uint32_t type; };
template<> struct endpoint_type<CONFIG__BRAKE_RESISTANCE> { typedef float type; };
template<> struct endpoint_type<CONFIG__ENABLE_UART> { typedef bool type; };
template<> struct endpoint_type<CONFIG__ENABLE_I2C_INSTEAD_OF_CAN> { typedef bool type; };
template<> struct endpoint_type<CONFIG__DC_BUS_UNDERVOLTAGE_TRIP_LEVEL> { typedef float type; };
template<> struct endpoint_type<CONFIG__DC_BUS_OVERVOLTAGE_TRIP_LEVEL> { typedef float type; };
template<> struct endpoint_type<AXIS0__ERROR> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS0__ENABLE_STEP_DIR> { typedef bool type; };
template<> struct endpoint_type<AXIS0__CURRENT_STATE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS0__REQUESTED_STATE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS0__LOOP_COUNTER> { typedef uint32_t type; };
template<> struct endpoint_type<AXIS0__CONFIG__STARTUP_MOTOR_CALIBRATION> { typedef bool type; };
template<> struct endpoint_type<AXIS0__CONFIG__STARTUP_ENCODER_INDEX_SEARCH> { typedef bool type; };
template<> struct endpoint_type<AXIS0__CONFIG__STARTUP_ENCODER_OFFSET_CALIBRATION> { typedef bool type; };
template<> struct endpoint_type<AXIS0__CONFIG__STARTUP_CLOSED_LOOP_CONTROL> { typedef bool type; };
template<> struct endpoint_type<AXIS0__CONFIG__STARTUP_SENSORLESS_CONTROL> { typedef bool type; };
template<> struct endpoint_type<AXIS0__CONFIG__ENABLE_STEP_DIR> { typedef bool type; };
template<> struct endpoint_type<AXIS0__CONFIG__COUNTS_PER_STEP> { typedef float type; };
template<> struct endpoint_type<AXIS0__CONFIG__RAMP_UP_TIME> { typedef float type; };
template<> struct endpoint_type<AXIS0__CONFIG__RAMP_UP_DISTANCE> { typedef float type; };
template<> struct endpoint_type<AXIS0__CONFIG__SPIN_UP_CURRENT> { typedef float type; };
template<> struct endpoint_type<AXIS0__CONFIG__SPIN_UP_ACCELERATION> { typedef float type; };
template<> struct endpoint_type<AXIS0__CONFIG__SPIN_UP_TARGET_VEL> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__ERROR> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__ARMED_STATE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__IS_CALIBRATED> { typedef bool type; };
template<> struct endpoint_type<AXIS0__MOTOR__CURRENT_MEAS_PHB> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CURRENT_MEAS_PHC> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__DC_CALIB_PHB> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__DC_CALIB_PHC> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__PHASE_CURRENT_REV_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CURRENT_CONTROL__P_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CURRENT_CONTROL__I_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CURRENT_CONTROL__V_CURRENT_CONTROL_INTEGRAL_D> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CURRENT_CONTROL__V_CURRENT_CONTROL_INTEGRAL_Q> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CURRENT_CONTROL__IBUS> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CURRENT_CONTROL__FINAL_V_ALPHA> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CURRENT_CONTROL__FINAL_V_BETA> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CURRENT_CONTROL__IQ_SETPOINT> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CURRENT_CONTROL__IQ_MEASURED> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CURRENT_CONTROL__MAX_ALLOWED_CURRENT> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__GATE_DRIVER__DRV_FAULT> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_GENERAL> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_ADC_CB_I> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_ADC_CB_DC> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_MEAS_R> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_MEAS_L> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_ENC_CALIB> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_IDX_SEARCH> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_FOC_VOLTAGE> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__TIMING_LOG__TIMING_LOG_FOC_CURRENT> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__CONFIG__PRE_CALIBRATED> { typedef bool type; };
template<> struct endpoint_type<AXIS0__MOTOR__CONFIG__POLE_PAIRS> { typedef int32_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__CONFIG__CALIBRATION_CURRENT> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CONFIG__RESISTANCE_CALIB_MAX_VOLTAGE> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CONFIG__PHASE_INDUCTANCE> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CONFIG__PHASE_RESISTANCE> { typedef float type; };
template<> struct endpoint_type<AXIS0__MOTOR__CONFIG__DIRECTION> { typedef int32_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__CONFIG__MOTOR_TYPE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS0__MOTOR__CONFIG__CURRENT_LIM> { typedef float type; };
template<> struct endpoint_type<AXIS0__CONTROLLER__POS_SETPOINT> { typedef float type; };
template<> struct endpoint_type<AXIS0__CONTROLLER__VEL_SETPOINT> { typedef float type; };
template<> struct endpoint_type<AXIS0__CONTROLLER__VEL_INTEGRATOR_CURRENT> { typedef float type; };
template<> struct endpoint_type<AXIS0__CONTROLLER__CURRENT_SETPOINT> { typedef float type; };
template<> struct endpoint_type<AXIS0__CONTROLLER__CONFIG__CONTROL_MODE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS0__CONTROLLER__CONFIG__POS_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS0__CONTROLLER__CONFIG__VEL_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS0__CONTROLLER__CONFIG__VEL_INTEGRATOR_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS0__CONTROLLER__CONFIG__VEL_LIMIT> { typedef float type; };
template<> struct endpoint_type<AXIS0__CONTROLLER__START_ANTICOGGING_CALIBRATION> { typedef void type; };
template<> struct endpoint_type<AXIS0__ENCODER__ERROR> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS0__ENCODER__IS_READY> { typedef bool type; };
template<> struct endpoint_type<AXIS0__ENCODER__INDEX_FOUND> { typedef bool type; };
template<> struct endpoint_type<AXIS0__ENCODER__SHADOW_COUNT> { typedef int32_t type; };
template<> struct endpoint_type<AXIS0__ENCODER__COUNT_IN_CPR> { typedef int32_t type; };
template<> struct endpoint_type<AXIS0__ENCODER__OFFSET> { typedef int32_t type; };
template<> struct endpoint_type<AXIS0__ENCODER__PHASE> { typedef float type; };
template<> struct endpoint_type<AXIS0__ENCODER__POS_ESTIMATE> { typedef float type; };
template<> struct endpoint_type<AXIS0__ENCODER__POS_CPR> { typedef float type; };
template<> struct endpoint_type<AXIS0__ENCODER__PLL_VEL> { typedef float type; };
template<> struct endpoint_type<AXIS0__ENCODER__PLL_KP> { typedef float type; };
template<> struct endpoint_type<AXIS0__ENCODER__PLL_KI> { typedef float type; };
template<> struct endpoint_type<AXIS0__ENCODER__CONFIG__USE_INDEX> { typedef bool type; };
template<> struct endpoint_type<AXIS0__ENCODER__CONFIG__PRE_CALIBRATED> { typedef bool type; };
template<> struct endpoint_type<AXIS0__ENCODER__CONFIG__IDX_SEARCH_SPEED> { typedef float type; };
template<> struct endpoint_type<AXIS0__ENCODER__CONFIG__CPR> { typedef int32_t type; };
template<> struct endpoint_type<AXIS0__ENCODER__CONFIG__OFFSET> { typedef int32_t type; };
template<> struct endpoint_type<AXIS0__ENCODER__CONFIG__CALIB_RANGE> { typedef float type; };
template<> struct endpoint_type<AXIS0__SENSORLESS_ESTIMATOR__ERROR> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS0__SENSORLESS_ESTIMATOR__PHASE> { typedef float type; };
template<> struct endpoint_type<AXIS0__SENSORLESS_ESTIMATOR__PLL_POS> { typedef float type; };
template<> struct endpoint_type<AXIS0__SENSORLESS_ESTIMATOR__PLL_VEL> { typedef float type; };
template<> struct endpoint_type<AXIS0__SENSORLESS_ESTIMATOR__PLL_KP> { typedef float type; };
template<> struct endpoint_type<AXIS0__SENSORLESS_ESTIMATOR__PLL_KI> { typedef float type; };
template<> struct endpoint_type<AXIS1__ERROR> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS1__ENABLE_STEP_DIR> { typedef bool type; };
template<> struct endpoint_type<AXIS1__CURRENT_STATE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS1__REQUESTED_STATE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS1__LOOP_COUNTER> { typedef uint32_t type; };
template<> struct endpoint_type<AXIS1__CONFIG__STARTUP_MOTOR_CALIBRATION> { typedef bool type; };
template<> struct endpoint_type<AXIS1__CONFIG__STARTUP_ENCODER_INDEX_SEARCH> { typedef bool type; };
template<> struct endpoint_type<AXIS1__CONFIG__STARTUP_ENCODER_OFFSET_CALIBRATION> { typedef bool type; };
template<> struct endpoint_type<AXIS1__CONFIG__STARTUP_CLOSED_LOOP_CONTROL> { typedef bool type; };
template<> struct endpoint_type<AXIS1__CONFIG__STARTUP_SENSORLESS_CONTROL> { typedef bool type; };
template<> struct endpoint_type<AXIS1__CONFIG__ENABLE_STEP_DIR> { typedef bool type; };
template<> struct endpoint_type<AXIS1__CONFIG__COUNTS_PER_STEP> { typedef float type; };
template<> struct endpoint_type<AXIS1__CONFIG__RAMP_UP_TIME> { typedef float type; };
template<> struct endpoint_type<AXIS1__CONFIG__RAMP_UP_DISTANCE> { typedef float type; };
template<> struct endpoint_type<AXIS1__CONFIG__SPIN_UP_CURRENT> { typedef float type; };
template<> struct endpoint_type<AXIS1__CONFIG__SPIN_UP_ACCELERATION> { typedef float type; };
template<> struct endpoint_type<AXIS1__CONFIG__SPIN_UP_TARGET_VEL> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__ERROR> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__ARMED_STATE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__IS_CALIBRATED> { typedef bool type; };
template<> struct endpoint_type<AXIS1__MOTOR__CURRENT_MEAS_PHB> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CURRENT_MEAS_PHC> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__DC_CALIB_PHB> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__DC_CALIB_PHC> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__PHASE_CURRENT_REV_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CURRENT_CONTROL__P_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CURRENT_CONTROL__I_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CURRENT_CONTROL__V_CURRENT_CONTROL_INTEGRAL_D> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CURRENT_CONTROL__V_CURRENT_CONTROL_INTEGRAL_Q> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CURRENT_CONTROL__IBUS> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CURRENT_CONTROL__FINAL_V_ALPHA> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CURRENT_CONTROL__FINAL_V_BETA> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CURRENT_CONTROL__IQ_SETPOINT> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CURRENT_CONTROL__IQ_MEASURED> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CURRENT_CONTROL__MAX_ALLOWED_CURRENT> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__GATE_DRIVER__DRV_FAULT> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_GENERAL> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_ADC_CB_I> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_ADC_CB_DC> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_MEAS_R> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_MEAS_L> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_ENC_CALIB> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_IDX_SEARCH> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_FOC_VOLTAGE> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__TIMING_LOG__TIMING_LOG_FOC_CURRENT> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__CONFIG__PRE_CALIBRATED> { typedef bool type; };
template<> struct endpoint_type<AXIS1__MOTOR__CONFIG__POLE_PAIRS> { typedef int32_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__CONFIG__CALIBRATION_CURRENT> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CONFIG__RESISTANCE_CALIB_MAX_VOLTAGE> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CONFIG__PHASE_INDUCTANCE> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CONFIG__PHASE_RESISTANCE> { typedef float type; };
template<> struct endpoint_type<AXIS1__MOTOR__CONFIG__DIRECTION> { typedef int32_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__CONFIG__MOTOR_TYPE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS1__MOTOR__CONFIG__CURRENT_LIM> { typedef float type; };
template<> struct endpoint_type<AXIS1__CONTROLLER__POS_SETPOINT> { typedef float type; };
template<> struct endpoint_type<AXIS1__CONTROLLER__VEL_SETPOINT> { typedef float type; };
template<> struct endpoint_type<AXIS1__CONTROLLER__VEL_INTEGRATOR_CURRENT> { typedef float type; };
template<> struct endpoint_type<AXIS1__CONTROLLER__CURRENT_SETPOINT> { typedef float type; };
template<> struct endpoint_type<AXIS1__CONTROLLER__CONFIG__CONTROL_MODE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS1__CONTROLLER__CONFIG__POS_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS1__CONTROLLER__CONFIG__VEL_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS1__CONTROLLER__CONFIG__VEL_INTEGRATOR_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS1__CONTROLLER__CONFIG__VEL_LIMIT> { typedef float type; };
template<> struct endpoint_type<AXIS1__CONTROLLER__START_ANTICOGGING_CALIBRATION> { typedef void type; };
template<> struct endpoint_type<AXIS1__ENCODER__ERROR> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS1__ENCODER__IS_READY> { typedef bool type; };
template<> struct endpoint_type<AXIS1__ENCODER__INDEX_FOUND> { typedef bool type; };
template<> struct endpoint_type<AXIS1__ENCODER__SHADOW_COUNT> { typedef int32_t type; };
template<> struct endpoint_type<AXIS1__ENCODER__COUNT_IN_CPR> { typedef int32_t type; };
template<> struct endpoint_type<AXIS1__ENCODER__OFFSET> { typedef int32_t type; };
template<> struct endpoint_type<AXIS1__ENCODER__PHASE> { typedef float type; };
template<> struct endpoint_type<AXIS1__ENCODER__POS_ESTIMATE> { typedef float type; };
template<> struct endpoint_type<AXIS1__ENCODER__POS_CPR> { typedef float type; };
template<> struct endpoint_type<AXIS1__ENCODER__PLL_VEL> { typedef float type; };
template<> struct endpoint_type<AXIS1__ENCODER__PLL_KP> { typedef float type; };
template<> struct endpoint_type<AXIS1__ENCODER__PLL_KI> { typedef float type; };
template<> struct endpoint_type<AXIS1__ENCODER__CONFIG__USE_INDEX> { typedef bool type; };
template<> struct endpoint_type<AXIS1__ENCODER__CONFIG__PRE_CALIBRATED> { typedef bool type; };
template<> struct endpoint_type<AXIS1__ENCODER__CONFIG__IDX_SEARCH_SPEED> { typedef float type; };
template<> struct endpoint_type<AXIS1__ENCODER__CONFIG__CPR> { typedef int32_t type; };
template<> struct endpoint_type<AXIS1__ENCODER__CONFIG__OFFSET> { typedef int32_t type; };
template<> struct endpoint_type<AXIS1__ENCODER__CONFIG__CALIB_RANGE> { typedef float type; };
template<> struct endpoint_type<AXIS1__SENSORLESS_ESTIMATOR__ERROR> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS1__SENSORLESS_ESTIMATOR__PHASE> { typedef float type; };
template<> struct endpoint_type<AXIS1__SENSORLESS_ESTIMATOR__PLL_POS> { typedef float type; };
template<> struct endpoint_type<AXIS1__SENSORLESS_ESTIMATOR__PLL_VEL> { typedef float type; };
template<> struct endpoint_type<AXIS1__SENSORLESS_ESTIMATOR__PLL_KP> { typedef float type; };
template<> struct endpoint_type<AXIS1__SENSORLESS_ESTIMATOR__PLL_KI> { typedef float type; };
template<> struct endpoint_type<TEST_PROPERTY> { typedef uint32_t type; };
template<> struct endpoint_type<SAVE_CONFIGURATION> { typedef void type; };
template<> struct endpoint_type<ERASE_CONFIGURATION> { typedef void type; };
template<> struct endpoint_type<REBOOT> { typedef void type; };
template<> struct endpoint_type<ENTER_DFU_MODE> { typedef void type; };


template<int I>
using endpoint_type_t = typename endpoint_type<I>::type;

}

#endif // __ODRIVE_ENDPOINTS_HPP