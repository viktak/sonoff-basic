#ifndef DEFINES_H
#define DEFINES_H

#define MQTT_CUSTOMER "viktak"
#define MQTT_PROJECT  "spiti"

#define HARDWARE_ID "Sonoff basic v1.0"
#define HARDWARE_VERSION "1.0"
#define SOFTWARE_ID "Sonoff"
#define FIRMWARE_VERSION "1.1"

#define DEBUG_SPEED 921600

#define JSON_SETTINGS_SIZE (JSON_OBJECT_SIZE(9) + 200)
#define JSON_MQTT_COMMAND_SIZE 300

#define CONNECTION_STATUS_LED_GPIO 13           //  Built-in green LED

#define RELAY_GPIO 12

#endif