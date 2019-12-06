/*
 * settings_studiomill_gquintic.h - Studiomill, using gQuintic with onboard stepper drivers
 * This file is part of the g2core project
 *
 * Copyright (c) 2012 - 2017 Alden S. Hart, Jr.
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

#define INIT_MESSAGE "Initializing config for 4-axes Studiomill"
#define USB_SERIAL_PORTS_EXPOSED   1
#define TEXT_VERBOSITY              TV_VERBOSE              // {tv: TV_SILENT, TV_VERBOSE
#define COMM_MODE                   JSON_MODE               // {ej: TEXT_MODE, JSON_MODE
#define XIO_ENABLE_FLOW_CONTROL     FLOW_CONTROL_RTS        // FLOW_CONTROL_OFF, FLOW_CONTROL_XON, FLOW_CONTROL_RTS
#define JSON_VERBOSITY              JV_MESSAGES             // {jv: JV_SILENT, JV_FOOTER, JV_CONFIGS, JV_MESSAGES, JV_LINENUM, JV_VERBOSE
#define QUEUE_REPORT_VERBOSITY      QR_OFF                  // {qv: QR_OFF, QR_SINGLE, QR_TRIPLE
#define STATUS_REPORT_VERBOSITY     SR_FILTERED             // {sv: SR_OFF, SR_FILTERED, SR_VERBOSE
#define STATUS_REPORT_MIN_MS        200                     // (no JSON) milliseconds - enforces a viable minimum
#define STATUS_REPORT_INTERVAL_MS   250                     // {si: milliseconds - set $SV=0 to disable

#define STATUS_REPORT_DEFAULTS "line","posx","posy","posz","posa","feed","vel","unit","coor","dist","admo","frmo","momo","stat"
// Alternate SRs that report in drawable units
//#define STATUS_REPORT_DEFAULTS "line","vel","mpox","mpoy","mpoz","mpoa","coor","ofsa","ofsx","ofsy","ofsz","dist","unit","stat","homz","homy","homx","momo"

#define GCODE_DEFAULT_UNITS         MILLIMETERS             // {gun: MILLIMETERS or INCHES
#define GCODE_DEFAULT_PLANE         CANON_PLANE_XY          // {gpl: CANON_PLANE_XY, CANON_PLANE_XZ, or CANON_PLANE_YZ
#define GCODE_DEFAULT_COORD_SYSTEM  G54                     // {gco: G54, G55, G56, G57, G58 or G59
#define GCODE_DEFAULT_PATH_CONTROL  PATH_CONTINUOUS         // {gpa: PATH_EXACT_PATH, PATH_EXACT_STOP, PATH_CONTINUOUS
#define GCODE_DEFAULT_DISTANCE_MODE ABSOLUTE_DISTANCE_MODE  // {gdi: ABSOLUTE_DISTANCE_MODE, INCREMENTAL_DISTANCE_MODE

// KINEMATICS (which may later change the following values)
#define KINE_CARTESIAN 0
#define KINEMATICS KINE_CARTESIAN


// MOTOR 1
#define M1_MOTOR_MAP                AXIS_X                  // {1ma: AXIS_X, AXIS_Y...
#define M1_STEP_ANGLE               1.8                     // {1sa: degrees per step
#define M1_TRAVEL_PER_REV           4.0                     // {1tr:  1.25 is a typical value for a screw axis
#define M1_MICROSTEPS               8                       // {1mi:  1,2,4,8,    16,32 (G2 ONLY)
#define M1_POLARITY                 0                       // {1po:  0=normal direction, 1=inverted direction
#define M1_POWER_MODE               MOTOR_ALWAYS_POWERED    // {1pm:  MOTOR_DISABLED, MOTOR_ALWAYS_POWERED, MOTOR_POWERED_IN_CYCLE, MOTOR_POWERED_ONLY_WHEN_MOVING
#define M1_POWER_LEVEL              0.5                     // {1pl:   0.0=no power, 1.0=max power

// MOTOR 2
#define M2_MOTOR_MAP                AXIS_Y
#define M2_STEP_ANGLE               1.8
#define M2_TRAVEL_PER_REV           1.0
#define M2_MICROSTEPS               8
#define M2_POLARITY                 1
#define M2_POWER_MODE               MOTOR_ALWAYS_POWERED
#define M2_POWER_LEVEL              0.5

// MOTOR 3
#define M3_MOTOR_MAP                AXIS_Z
#define M3_STEP_ANGLE               1.8
#define M3_TRAVEL_PER_REV           4.1
#define M3_MICROSTEPS               8
#define M3_POLARITY                 0
#define M3_POWER_MODE               MOTOR_ALWAYS_POWERED
#define M3_POWER_LEVEL              0.5

// MOTOR 4
#define M4_MOTOR_MAP                AXIS_A
#define M4_STEP_ANGLE               1.8
#define M4_TRAVEL_PER_REV           5.0 // Estimate from watching the motor vs axis markings
#define M4_MICROSTEPS               8
#define M4_STEPS_PER_UNIT           0
#define M4_POLARITY                 1
#define M4_POWER_MODE               MOTOR_ALWAYS_POWERED
#define M4_POWER_LEVEL              0.5

// X AXIS
#define X_AXIS_MODE                 AXIS_STANDARD
#define X_VELOCITY_MAX              1500.0                  // {xvm:  G0 max velocity in mm/min
#define X_FEEDRATE_MAX              1500.0                  // {xfr:  G1 max feed rate in mm/min
#define X_TRAVEL_MIN                0.0                     // {xtn:  minimum travel for soft limits
#define X_TRAVEL_MAX                165.0                   // {xtm:  travel between switches or crashes
#define X_JERK_MAX                  500.0                   // {xjm:
#define X_JERK_HIGH_SPEED           500.0                   // {xjh:
#define X_HOMING_INPUT              1                       // {xhi:  input used for homing or 0 to disable
#define X_HOMING_DIRECTION          0                       // {xhd:  0=search moves negative, 1= search moves positive
#define X_SEARCH_VELOCITY           250.0                   // {xsv:  minus means move to minimum switch
#define X_LATCH_VELOCITY            150.0                   // {xlv:  mm/min
#define X_LATCH_BACKOFF             4.0                     // {xlb:  mm
#define X_ZERO_BACKOFF              2.0                     // {xzb:  mm

// Y AXIS
#define Y_AXIS_MODE                 AXIS_STANDARD
#define Y_VELOCITY_MAX              300.0
#define Y_FEEDRATE_MAX              300.0
#define Y_TRAVEL_MIN                0.0
#define Y_TRAVEL_MAX                235.0
#define Y_JERK_MAX                  250.0
#define Y_JERK_HIGH_SPEED           250.0
#define Y_HOMING_INPUT              3
#define Y_HOMING_DIRECTION          0
#define Y_SEARCH_VELOCITY           250.0
#define Y_LATCH_VELOCITY            150.0
#define Y_LATCH_BACKOFF             4.0
#define Y_ZERO_BACKOFF              2.0

// Z AXIS
#define Z_AXIS_MODE                 AXIS_STANDARD
#define Z_VELOCITY_MAX              1500.0
#define Z_FEEDRATE_MAX              1500.0
#define Z_TRAVEL_MIN                -138.0
#define Z_TRAVEL_MAX                0
#define Z_JERK_MAX                  250.0
#define Z_JERK_HIGH_SPEED           250.0
#define Z_HOMING_INPUT              6
#define Z_HOMING_DIRECTION          1
#define Z_SEARCH_VELOCITY           750.0
#define Z_LATCH_VELOCITY            150.0
#define Z_LATCH_BACKOFF             4.0
#define Z_ZERO_BACKOFF              2.0

#define A_AXIS_MODE                 AXIS_RADIUS
#define A_RADIUS                    57.25
#define A_VELOCITY_MAX              2000.0
#define A_FEEDRATE_MAX              A_VELOCITY_MAX
#define A_TRAVEL_MIN                -370.0                                    // Can't do -1.0 for these, else homing A axis breaks
#define A_TRAVEL_MAX                370.0
//#define A_TRAVEL_MIN                -1.0                                     // min/max the same means infinite, no limit
//#define A_TRAVEL_MAX                -1.0
#define A_JERK_MAX                  150
#define A_JERK_HIGH_SPEED           A_JERK_MAX
#define A_HOMING_INPUT              7
#define A_HOMING_DIRECTION          0
#define A_SEARCH_VELOCITY           (A_VELOCITY_MAX * 0.5)
#define A_LATCH_VELOCITY            (A_VELOCITY_MAX * 0.1)
#define A_LATCH_BACKOFF             5.0
#define A_ZERO_BACKOFF              2.0

// * Limit switches *

// Xmin
#define DI1_ENABLED                 IO_ENABLED
#define DI1_POLARITY                IO_ACTIVE_HIGH
#define DI1_ACTION                  INPUT_ACTION_STOP
#define DI1_EXTERNAL_NUMBER         1

// Xmax
#define DI2_ENABLED                 IO_ENABLED
#define DI2_POLARITY                IO_ACTIVE_HIGH
#define DI2_ACTION                  INPUT_ACTION_STOP
#define DI2_EXTERNAL_NUMBER         2

// Ymin
#define DI3_ENABLED                 IO_ENABLED
#define DI3_POLARITY                IO_ACTIVE_HIGH
#define DI3_ACTION                  INPUT_ACTION_STOP
#define DI3_EXTERNAL_NUMBER         3

// Ymax
#define DI4_ENABLED                 IO_ENABLED
#define DI4_POLARITY                IO_ACTIVE_HIGH
#define DI4_ACTION                  INPUT_ACTION_STOP
#define DI4_EXTERNAL_NUMBER         4

// Zmin
#define DI5_ENABLED                 IO_ENABLED
#define DI5_POLARITY                IO_ACTIVE_HIGH
#define DI5_ACTION                  INPUT_ACTION_STOP
#define DI5_EXTERNAL_NUMBER         5

// Zmax
#define DI6_ENABLED                 IO_ENABLED
#define DI6_POLARITY                IO_ACTIVE_HIGH
#define DI6_ACTION                  INPUT_ACTION_STOP
#define DI6_EXTERNAL_NUMBER         6

// A Home
#define DI7_ENABLED                 IO_ENABLED
#define DI7_POLARITY                IO_ACTIVE_LOW
#define DI7_ACTION                  INPUT_ACTION_NONE
#define DI7_EXTERNAL_NUMBER         7

#define DI8_ENABLED                 IO_DISABLED
#define DI9_ENABLED                 IO_DISABLED
