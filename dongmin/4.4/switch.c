#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define POWER           0
#define CHANNEL_UP      1
#define CHANNEL_DOWN    2
#define VOLUME_UP       3
#define VOLUME_DOWN     4
#define PLAY            5
#define PAUSE           6

int command;

void receive_command_from_remote_control (void)
{
    command = rand() % 7;
    printf("임의로 생성한 명령어: %d\n", command);
}

void execute_command (void)
{
    switch (command)
    {
    case POWER:
        printf("Processing Power\n");
        break;
    
    case CHANNEL_UP:
        printf("Processing Channel Up\n");
        break;
    
    case CHANNEL_DOWN:
        printf("Processing Channel Down\n");
        break;
    
    case VOLUME_UP:
        printf("Processing Volume Up\n");
        break;
    
    case VOLUME_DOWN:
        printf("Processing Volume Down\n");
        break;

    case PLAY:
        printf("Processing Play\n");
        break;
    
    case PAUSE:
        printf("Processing Pause\n");
        break;

    default:
        printf("프로토콜이 아직 구현되지 않았습니다!\n");
        break;
    }
}

int main (void)
{
    srand(time(NULL));

    receive_command_from_remote_control();

    execute_command();

    return 0;
}