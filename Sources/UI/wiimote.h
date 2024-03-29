
#ifndef _WIIMOTE_H_
#define _WIIMOTE_H_

#include <ardrone_tool/UI/ardrone_input.h>

#define WIIMOTE_FIND_TIMEOUT 5
//#define WIIMOTE_SUPPORT 1

extern input_device_t wiimote_device;

C_RESULT open_wiimote(void);
C_RESULT update_wiimote(void);
C_RESULT close_wiimote(void);

#endif // _WIIMOTE_H_

