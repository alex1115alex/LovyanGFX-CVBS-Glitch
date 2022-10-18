#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "freertos/message_buffer.h"
#include "esp_system.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include <math.h>

//web socket libs
#include "freertos/semphr.h"
#include "freertos/event_groups.h"
#include "esp_websocket_client.h"
#include "esp_event.h"
using namespace std;
#include <stdio.h>
#include <time.h>




#include "user_setting.hpp"


LGFX lcd;
extern "C" void app_main()
{
    lcd.init();
    lcd.setTextSize(4);
    lcd.drawString("HELLO THERE!!! :D", 10, 10);
}