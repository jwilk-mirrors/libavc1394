/*
 * libavc1394 - GNU/Linux 1394 AV/C Library
 *
 * Originally written by Andreas Micklei <andreas.micklei@ivistar.de>
 * Currently maintained by Dan Dennedy <dan@dennedy.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __AVC1394_VCR_H__
#define __AVC1394_VCR_H__

#include <libraw1394/raw1394.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ##### Check to see if device is playing ##### */
int 
avc1394_vcr_is_playing(raw1394handle_t handle, nodeid_t node);

/* ##### Check to see if the device is recording ##### */
int
avc1394_vcr_is_recording(raw1394handle_t handle, nodeid_t node);

/* ##### Tell the device to PLAY ##### */
void
avc1394_vcr_play(raw1394handle_t handle, nodeid_t node);

/* ##### Tell the device to STOP ##### */
void
avc1394_vcr_stop(raw1394handle_t handle, nodeid_t node);

/* ##### Tell the device to REWIND ##### */
void
avc1394_vcr_rewind(raw1394handle_t handle, nodeid_t node);

/* ##### Tell the device to PAUSE ##### */
void
avc1394_vcr_pause(raw1394handle_t handle, nodeid_t node);

/* ##### Tell the device to FAST FORWARD ##### */
void 
avc1394_vcr_forward(raw1394handle_t handle, nodeid_t node);

/* ##### Tell the device goto NEXT frame ##### */
void
avc1394_vcr_next(raw1394handle_t handle, nodeid_t node);

/* ##### Tell the device goto PREVIOUS frame ##### */
void 
avc1394_vcr_previous(raw1394handle_t handle, nodeid_t node);

/* ##### Tell the device to EJECT (usually not supported) ##### */
void 
avc1394_vcr_eject(raw1394handle_t handle, nodeid_t node);

/* ##### Tell the device to RECORD ##### */
void 
avc1394_vcr_record(raw1394handle_t handle, nodeid_t node);

/* ##### Ask the device for the status ##### */
quadlet_t 
avc1394_vcr_status(raw1394handle_t handle, nodeid_t node);

/* Get a textual description of the status */
char *avc1394_vcr_decode_status(quadlet_t response);

#ifdef __cplusplus
}
#endif

#endif

