#ifndef __PROTOCOL_CALL_TABLE_MAP_H__
#define __PROTOCOL_CALL_TABLE_MAP_H__

#define __PROTOCOL_CALL_TABLE(nr, sym)  [nr] = sym,

#include "protocol.h"

__PROTOCOL_CALL_TABLE(0, process_power)
__PROTOCOL_CALL_TABLE(1, process_channel_up)
__PROTOCOL_CALL_TABLE(2, process_channel_down)
__PROTOCOL_CALL_TABLE(3, process_volume_up)
__PROTOCOL_CALL_TABLE(4, process_volume_down)
__PROTOCOL_CALL_TABLE(5, process_play)
__PROTOCOL_CALL_TABLE(6, process_pause)

#endif // __PROTOCOL_CALL_TABLE_MAP_H__