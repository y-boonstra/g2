/*
 * settings_Djuke_test.h - Djuke test project
 * This file is part of the g2core project
 *
 * Copyright (c) 2010 - 2019 Menno de Graaf
 *
 * This file ("the software") is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2 as published by the
 * Free Software Foundation. You should have received a copy of the GNU General Public
 * License, version 2 along with the software.  If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, you may use this file as part of a software library without
 * restriction. Specifically, if other files instantiate templates or use macros or
 * inline functions from this file, or you compile this file and link it with  other
 * files to produce an executable, this file does not by itself cause the resulting
 * executable to be covered by the GNU General Public License. This exception does not
 * however invalidate any other reasons why the executable file might be covered by the
 * GNU General Public License.
 *
 * THE SOFTWARE IS DISTRIBUTED IN THE HOPE THAT IT WILL BE USEFUL, BUT WITHOUT ANY
 * WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
 * SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/***********************************************************************/
/**** Djuke test profile ******************************************/
/***********************************************************************/

// ***> NOTE: The init message must be a single line with no CRs or LFs
#define INIT_MESSAGE "Initializing configs to Djuke test profile"

//**** GLOBAL / GENERAL SETTINGS ******************************************************

// Machine configuration settings

#define JUNCTION_INTEGRATION_TIME   0.75                    // cornering - between 0.10 and 2.00 (higher is faster)
#define CHORDAL_TOLERANCE           0.01                    // chordal tolerance for arcs (in mm)

#define SOFT_LIMIT_ENABLE           0                       // 0=off, 1=on
#define HARD_LIMIT_ENABLE           1                       // 0=off, 1=on
#define SAFETY_INTERLOCK_ENABLE     1                       // 0=off, 1=on

// Spindle settings
#define SPINDLE_ENABLE_POLARITY     1                       // 0=active low, 1=active high
#define SPINDLE_DIR_POLARITY        0                       // 0=clockwise is low, 1=clockwise is high
#define SPINDLE_PAUSE_ON_HOLD       true
#define SPINDLE_DWELL_TIME          1.0

#define P1_PWM_FREQUENCY 100  // in Hz
#define P1_CW_SPEED_LO 1      // in percent (arbitrary units)
#define P1_CW_SPEED_HI 100
#define P1_CW_PHASE_LO 0.01  // phase [0..1]
#define P1_CW_PHASE_HI 1.0
#define P1_CCW_SPEED_LO 1
#define P1_CCW_SPEED_HI 100
#define P1_CCW_PHASE_LO 0.01
#define P1_CCW_PHASE_HI 1.0
#define P1_PWM_PHASE_OFF 0.0

// Coolant settings
#define COOLANT_MIST_POLARITY       1                       // 0=active low, 1=active high
#define COOLANT_FLOOD_POLARITY      1                       // 0=active low, 1=active high
#define COOLANT_PAUSE_ON_HOLD       false

// Communications and reporting settings

#define COMM_MODE                   TEXT_MODE               // one of: TEXT_MODE, JSON_MODE, AUTO_MODE
#define XIO_ENABLE_FLOW_CONTROL     FLOW_CONTROL_OFF        // FLOW_CONTROL_OFF, FLOW_CONTROL_RTS

#define TEXT_VERBOSITY              TV_VERBOSE              // one of: TV_SILENT, TV_VERBOSE
#define JSON_VERBOSITY              JV_MESSAGES             // one of: JV_SILENT, JV_FOOTER, JV_CONFIGS, JV_MESSAGES, JV_LINENUM, JV_VERBOSE
#define QUEUE_REPORT_VERBOSITY      QR_OFF                  // one of: QR_OFF, QR_SINGLE, QR_TRIPLE

#define STATUS_REPORT_VERBOSITY     SR_FILTERED             // one of: SR_OFF, SR_FILTERED, SR_VERBOSE

#define STATUS_REPORT_MIN_MS        200                     // milliseconds - enforces a viable minimum
#define STATUS_REPORT_INTERVAL_MS   500                     // milliseconds - set $SV=0 to disable

#define STATUS_REPORT_DEFAULTS "line","posx","posy","posz","feed","vel","unit","coor","dist","admo","frmo","momo","stat"

// Alternate SRs that report in drawable units
//#define STATUS_REPORT_DEFAULTS "line","vel","mpox","mpoy","mpoz","mpoa","coor","ofsa","ofsx","ofsy","ofsz","dist","unit","stat","homz","homy","homx","momo"
//#define STATUS_REPORT_DEFAULTS "_ts1","_cs1","_es1","_xs1","_fe1","line","posx","posy","posz","vel","stat"

// Gcode startup defaults
#define GCODE_DEFAULT_UNITS         MILLIMETERS             // MILLIMETERS or INCHES
#define GCODE_DEFAULT_PLANE         CANON_PLANE_XY          // CANON_PLANE_XY, CANON_PLANE_XZ, or CANON_PLANE_YZ
#define GCODE_DEFAULT_COORD_SYSTEM  G54                     // G54, G55, G56, G57, G58 or G59
#define GCODE_DEFAULT_PATH_CONTROL  PATH_CONTINUOUS
#define GCODE_DEFAULT_DISTANCE_MODE ABSOLUTE_DISTANCE_MODE

// *** motor settings ************************************************************************************

#define MOTOR_POWER_MODE            MOTOR_POWERED_IN_CYCLE  // default motor power mode (see cmMotorPowerMode in stepper.h)
#define MOTOR_POWER_TIMEOUT         2.00                    // motor power timeout in seconds
#define MOTOR_POWER_LEVEL           0.5	                    // default motor power level 0.00 - 1.00

#define M1_MOTOR_MAP                AXIS_X_EXTERNAL         // 1ma
#define M1_STEP_ANGLE               1.8                     // 1sa
#define M1_TRAVEL_PER_REV           1.00                    // 1tr
#define M1_MICROSTEPS               8                       // 1mi  1,2,4,8,16,32
#define M1_POLARITY                 0                       // 1po  0=normal, 1=reversed
#define M1_POWER_MODE               MOTOR_POWER_MODE        // 1pm  TRUE=low power idle enabled
#define M1_POWER_LEVEL              MOTOR_POWER_LEVEL		// 1pl	Irrelevant for external drivers

#define M2_MOTOR_MAP                AXIS_Y_EXTERNAL
#define M2_STEP_ANGLE               1.8
#define M2_TRAVEL_PER_REV           1.00
#define M2_MICROSTEPS               8
#define M2_POLARITY                 0
#define M2_POWER_MODE               MOTOR_POWER_MODE
#define M2_POWER_LEVEL              MOTOR_POWER_LEVEL

#define M3_MOTOR_MAP                AXIS_Z_EXTERNAL
#define M3_STEP_ANGLE               1.8
#define M3_TRAVEL_PER_REV           1.0
#define M3_MICROSTEPS               8
#define M3_POLARITY                 0
#define M3_POWER_MODE               MOTOR_POWER_MODE
#define M3_POWER_LEVEL              MOTOR_POWER_LEVEL

#define M4_MOTOR_MAP                AXIS_A_EXTERNAL
#define M4_STEP_ANGLE               1.8
#define M4_TRAVEL_PER_REV           1.00
#define M4_MICROSTEPS               8
#define M4_POLARITY                 0
#define M4_POWER_MODE               MOTOR_POWER_MODE
#define M4_POWER_LEVEL              MOTOR_POWER_LEVEL

#define M5_MOTOR_MAP                AXIS_A_EXTERNAL
#define M5_STEP_ANGLE               1.8
#define M5_TRAVEL_PER_REV           1.00
#define M5_MICROSTEPS               8
#define M5_POLARITY                 0
#define M5_POWER_MODE               MOTOR_POWER_MODE
#define M5_POWER_LEVEL              MOTOR_POWER_LEVEL

#define M6_MOTOR_MAP                AXIS_A_EXTERNAL
#define M6_STEP_ANGLE               1.8
#define M6_TRAVEL_PER_REV           1.00
#define M6_MICROSTEPS               8
#define M6_POLARITY                 0
#define M6_POWER_MODE               MOTOR_POWER_MODE
#define M6_POWER_LEVEL              MOTOR_POWER_LEVEL

// *** axis settings **********************************************************************************

#define JERK_MAX                    10

#define X_AXIS_MODE                 AXIS_STANDARD           // xam  see canonical_machine.h cmAxisMode for valid values
#define X_VELOCITY_MAX              60                      // xvm  G0 max velocity in mm/min
#define X_FEEDRATE_MAX              X_VELOCITY_MAX          // xfr  G1 max feed rate in mm/min
#define X_TRAVEL_MIN                -1                      // xtn  minimum travel for soft limits
#define X_TRAVEL_MAX                -1                      // xtm  travel between switches or crashes
#define X_JERK_MAX                  JERK_MAX                // xjm  jerk * 1,000,000
#define X_JERK_HIGH_SPEED           X_JERK_MAX              // xjh
#define X_HOMING_INPUT              0                       // xhi  input used for homing or 0 to disable
#define X_HOMING_DIRECTION          0                       // xhd  0=search moves negative, 1= search moves positive
#define X_SEARCH_VELOCITY           5                       // xsv  minus means move to minimum switch
#define X_LATCH_VELOCITY            2                       // xlv  mm/min
#define X_LATCH_BACKOFF             2                       // xlb  mm
#define X_ZERO_BACKOFF              1                       // xzb  mm

#define Y_AXIS_MODE                 AXIS_STANDARD
#define Y_VELOCITY_MAX              60
#define Y_FEEDRATE_MAX              Y_VELOCITY_MAX
#define Y_TRAVEL_MIN                -1
#define Y_TRAVEL_MAX                -1
#define Y_JERK_MAX                  JERK_MAX
#define Y_JERK_HIGH_SPEED           Y_JERK_MAX
#define Y_HOMING_INPUT              0
#define Y_HOMING_DIRECTION          0
#define Y_SEARCH_VELOCITY           1000
#define Y_LATCH_VELOCITY            200
#define Y_LATCH_BACKOFF             2
#define Y_ZERO_BACKOFF              1

#define Z_AXIS_MODE                 AXIS_STANDARD
#define Z_VELOCITY_MAX              60
#define Z_FEEDRATE_MAX              Z_VELOCITY_MAX
#define Z_TRAVEL_MAX                -1
#define Z_TRAVEL_MIN                -1
#define Z_JERK_MAX                  JERK_MAX
#define Z_JERK_HIGH_SPEED           JERK_MAX
#define Z_HOMING_INPUT              0
#define Z_HOMING_DIRECTION          1
#define Z_SEARCH_VELOCITY           200
#define Z_LATCH_VELOCITY            100
#define Z_LATCH_BACKOFF             2
#define Z_ZERO_BACKOFF              1

#define A_AXIS_MODE                 AXIS_STANDARD
#define A_VELOCITY_MAX              60
#define A_FEEDRATE_MAX              A_VELOCITY_MAX
#define A_TRAVEL_MAX                -1
#define A_TRAVEL_MIN                -1
#define A_JERK_MAX                  JERK_MAX
#define A_JERK_HIGH_SPEED           JERK_MAX
#define A_HOMING_INPUT              0
#define A_HOMING_DIRECTION          0
#define A_SEARCH_VELOCITY           5
#define A_LATCH_VELOCITY            2
#define A_LATCH_BACKOFF             2
#define A_ZERO_BACKOFF              1

#define B_AXIS_MODE                 AXIS_STANDARD
#define B_VELOCITY_MAX              60
#define B_FEEDRATE_MAX              B_VELOCITY_MAX
#define B_TRAVEL_MAX                -1
#define B_TRAVEL_MIN                -1
#define B_JERK_MAX                  JERK_MAX
#define B_JERK_HIGH_SPEED           JERK_MAX
#define B_HOMING_INPUT              0
#define B_HOMING_DIRECTION          0
#define B_SEARCH_VELOCITY           5
#define B_LATCH_VELOCITY            2
#define B_LATCH_BACKOFF             2
#define B_ZERO_BACKOFF              1

#define C_AXIS_MODE                 AXIS_STANDARD
#define C_VELOCITY_MAX              60
#define C_FEEDRATE_MAX              C_VELOCITY_MAX
#define C_TRAVEL_MAX                -1
#define C_TRAVEL_MIN                -1
#define C_JERK_MAX                  JERK_MAX
#define C_JERK_HIGH_SPEED           JERK_MAX
#define C_HOMING_INPUT              0
#define C_HOMING_DIRECTION          0
#define C_SEARCH_VELOCITY           5
#define C_LATCH_VELOCITY            2
#define C_LATCH_BACKOFF             2
#define C_ZERO_BACKOFF              1

//*** Input / output settings ***
/*
    IO_MODE_DISABLED
    IO_ACTIVE_LOW    aka NORMALLY_OPEN
    IO_ACTIVE_HIGH   aka NORMALLY_CLOSED
    INPUT_ACTION_NONE
    INPUT_ACTION_STOP
    INPUT_ACTION_FAST_STOP
    INPUT_ACTION_HALT
    INPUT_ACTION_RESET
    INPUT_FUNCTION_NONE
    INPUT_FUNCTION_LIMIT
    INPUT_FUNCTION_INTERLOCK
    INPUT_FUNCTION_SHUTDOWN
    INPUT_FUNCTION_PANIC
*/
// Xmin
#define DI1_MODE                    NORMALLY_CLOSED
#define DI1_ACTION                  INPUT_ACTION_FAST_STOP
#define DI1_FUNCTION                INPUT_FUNCTION_LIMIT

// Xmax
#define DI2_MODE                    NORMALLY_CLOSED
#define DI2_ACTION                  INPUT_ACTION_FAST_STOP
#define DI2_FUNCTION                INPUT_FUNCTION_LIMIT

// Ymin
#define DI3_MODE                    NORMALLY_CLOSED
#define DI3_ACTION                  INPUT_ACTION_FAST_STOP
#define DI3_FUNCTION                INPUT_FUNCTION_LIMIT

// Ymax
#define DI4_MODE                    NORMALLY_CLOSED
#define DI4_ACTION                  INPUT_ACTION_FAST_STOP
#define DI4_FUNCTION                INPUT_FUNCTION_LIMIT

// Zmin configured as probe input
#define DI5_MODE                    NORMALLY_OPEN
#define DI5_ACTION                  INPUT_ACTION_NONE
#define DI5_FUNCTION                INPUT_FUNCTION_PROBE

// Zmax (switch at Zmin can be wired in series)
#define DI6_MODE                    NORMALLY_CLOSED
#define DI6_ACTION                  INPUT_ACTION_FAST_STOP
#define DI6_FUNCTION                INPUT_FUNCTION_LIMIT

// Amin
#define DI7_MODE                    NORMALLY_CLOSED
#define DI7_ACTION                  INPUT_ACTION_FAST_STOP
#define DI7_FUNCTION                INPUT_FUNCTION_LIMIT

// Amax
#define DI8_MODE                    NORMALLY_CLOSED
#define DI8_ACTION                  INPUT_ACTION_FAST_STOP
#define DI8_FUNCTION                INPUT_FUNCTION_LIMIT

// Bmin
#define DI9_MODE                    NORMALLY_CLOSED
#define DI9_ACTION                  INPUT_ACTION_FAST_STOP
#define DI9_FUNCTION                INPUT_FUNCTION_LIMIT

// Bmax
#define DI10_MODE                    NORMALLY_CLOSED
#define DI10_ACTION                  INPUT_ACTION_FAST_STOP
#define DI10_FUNCTION                INPUT_FUNCTION_LIMIT

// Cmin
#define DI11_MODE                    NORMALLY_CLOSED
#define DI11_ACTION                  INPUT_ACTION_FAST_STOP
#define DI11_FUNCTION                INPUT_FUNCTION_LIMIT

// Cmax
#define DI12_MODE                    NORMALLY_CLOSED
#define DI12_ACTION                  INPUT_ACTION_FAST_STOP
#define DI12_FUNCTION                INPUT_FUNCTION_LIMIT

// *** DEFAULT COORDINATE SYSTEM OFFSETS ***

#define G54_X_OFFSET 0    // G54 work offset
#define G54_Y_OFFSET 0
#define G54_Z_OFFSET 0
