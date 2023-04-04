#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "protocol.h"

enum protocol_remote_control {
    POWER,
    CHANNEL_UP,
    CHANNEL_DOWN,
    VOLUME_UP,
    VOLUME_DOWN,
    PLAY,
    PAUSE,
    END
};

#define PROTOCOL_CALL_BUFFER_COUNT   (END)
#define PROTOCOL_CALL_BUFFER         ((END) - (1))

typedef void (* protocol_call_table_ptr_t) (void);

void protocol_not_implemented (void)
{
    printf("프로토콜이 아직 구현되지 않았습니다!\n");
}

const protocol_call_table_ptr_t protocol_call_table[PROTOCOL_CALL_BUFFER_COUNT] = {
    [0 ... PROTOCOL_CALL_BUFFER] = protocol_not_implemented,
    #include "protocol_call_table_map.h"
};

int command;

void receive_command_from_remote_control (void)
{
    command = rand() % PROTOCOL_CALL_BUFFER_COUNT;
    printf("임의로 생성한 명령어: %d\n", command);
}

void execute_command (void)
{
    protocol_call_table[command]();
}

int main (void)
{
    srand(time(NULL));

    receive_command_from_remote_control();

    execute_command();

    return 0;
}