/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"


void myTask(void *pvParam){
   printf("hello,world\n");
   vTaskDelay(1000 / portTICK_PERIOD_MS);
 }

void app_main(void){
   xTaskcreate(myTask,"mytask1",1021,NULL,1,NULL);
}


