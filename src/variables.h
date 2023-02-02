#include <Arduino.h>
#include <AxisJoystick.h>
#include <Joystick.h>
#include <painlessMesh.h>

/*
 * Globale Variablen für Hardware
 */
extern unsigned int button_1_pin;
extern unsigned int button_1_pin_x;
extern unsigned int button_1_pin_y;
#if (INCLUDE_LORA)
extern unsigned int lora_1_pin_nss;
extern unsigned int lora_1_pin_dio0;
extern unsigned int lora_1_pin_reset;
extern unsigned int lora_1_pin_dio1;
extern boolean lora_1_active;
#endif
extern unsigned int sound_1_pin;
// extern unsigned int sound_2_pin;
extern boolean led_1_power;
extern unsigned int battery_1_pin;

/*
 * Globale Variablen für Sound
 */
extern unsigned int channel_1;
// extern unsigned int channel_2;
extern unsigned int volume_1;
// extern unsigned int volume_2;

/*
 *Globale Variablen für Mesh
 */
extern String mesh_prefix;
extern String mesh_password;
extern unsigned int mesh_port;
extern unsigned int mesh_channel;
extern boolean mesh_containsRoot;
extern boolean mesh_isRoot;

/*
 *Globale Variablen für Zeit
 */
extern unsigned int wake_hour;
extern unsigned int wake_minute;
extern unsigned int wake_hour_tmp;
extern unsigned int wake_minute_tmp;

/*
 * Globale Variablen für Konfiguration
 */
extern boolean spiffs_active;
extern String i18n;
extern boolean menu_sound_active;
extern boolean display_time;
extern boolean display_landscape;
extern String display_theme;
extern unsigned int display_level;
extern boolean debug_mode;
extern boolean giessen_mode;
extern unsigned int chip_id;

/*
 * Globale Variablen für Alarm
 */
extern unsigned long time_page_1;
extern unsigned long time_page_2;
extern unsigned long time_page_3;
extern boolean running_Alarm;

/*
 * Wird gesetzt wenn Config geändert wird. Lässt das neu speichern der Config aus
 */
extern boolean prefChanged;

/*
 *Global genutzte Objekte
 */
extern painlessMesh mesh;
extern int display_light;

extern const unsigned int arraySize;
extern unsigned int currentAlarms_unread;
extern unsigned int currentMessages_unread;
extern unsigned int nextAlarm;
extern unsigned int nextMessage;
extern unsigned int currentAlarm;
extern unsigned int currentMessage;

extern unsigned int displayAlarm;
extern unsigned int lastDisplayAlarm;
extern unsigned int displayMessage;
extern unsigned int lastDisplayMessage;

extern boolean updateTitlebar;
extern boolean display_on;
extern boolean display_action;

extern unsigned int battery_status;

extern boolean connected_usb;
extern boolean button_locked;

extern boolean wlan_connected;
extern int wlan_strength;

extern boolean wake_now;

extern Joystick *joystick;

extern boolean updateMenubar;
extern unsigned int currentMenu;
extern unsigned int lastMenu;
extern unsigned int currentMenubar;
extern unsigned int lastMenubar;

extern unsigned int scrollTextLength;
