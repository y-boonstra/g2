# ----------------------------------------------------------------------------
# This file is part of the Synthetos G2 project.
#
# Copyright (c) 2016 Robert Giseburt
# Copyright (c) 2016 Alden S. Hart Jr.
#
# This file ("the software") is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License, version 2 as published by the
# Free Software Foundation. You should have received a copy of the GNU General Public
# License, version 2 along with the software.  If not, see <http://www.gnu.org/licenses/>.
#
# THE SOFTWARE IS DISTRIBUTED IN THE HOPE THAT IT WILL BE USEFUL, BUT WITHOUT ANY
# WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
# OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
# SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
# OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#

# To compile a specific CONFIG:
#   make CONFIG=PrintrbotPlus

# Note how the BOARD is defaulted if not provided.
# To choose a CONFIG but apply it to a different BOARD:
#   make CONFIG=PrintrbotPlus BOARD=g2ref-a


include $(wildcard ./board/$(STAR).mk)

##########
# Custom Djuke board config:

ifeq ("$(CONFIG)","Djuke_board")
    ifeq ("$(BOARD)","NONE")
        BOARD=gshield
    endif
    SETTINGS_FILE="settings_Djuke_test.h"
endif