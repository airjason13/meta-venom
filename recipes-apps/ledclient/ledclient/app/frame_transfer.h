#ifndef _FRAME_TRANSFER_H_
#define _FRAME_TRANSFER_H_

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "utildbg.h"
#include "cabinetutils.h"
#include "frame.h"
#include "picousb.h"
#include "ledlayout.h"
int transfer_framergb_to_pico(AVFrame *pFrame, struct cabinet_params *params, int channel_count, struct libusb_device_handle *pico);

#endif
