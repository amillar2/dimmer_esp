#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_

#define CFG_HOLDER	0x00FF557	/* Change this value to load default configurations */
#define CFG_LOCATION	0x3C	/* Please don't change or if you know what you doing */
#define CLIENT_SSL_ENABLE
#define DELIMITER	"'{\":, }\n"
#define DISCOVERY_FLAG	 	1
/*DEFAULT CONFIGURATIONS*/

#define MQTT_HOST			"192.168.1.3"
#define MQTT_PORT			1883
#define MQTT_BUF_SIZE		1024
#define MQTT_KEEPALIVE		120	 /*second*/

#define MQTT_CLIENT_ID		"DeviceX_%08X"
#define MQTT_TOPIC_CONFIG		"DeviceX_%08X/config"
#define MQTT_TOPIC_STATUS		"DeviceX_%08X/status"
		
#define MQTT_TOPIC_PWM1			"kitchen/light"
#define MQTT_TOPIC_PWM2			"living/light"
#define MQTT_TOPIC_SW1			"kitchen/switch"
#define MQTT_TOPIC_SW2			"living/switch"
#define MQTT_TOPIC_DISCOVERY		"discovery"

#define MQTT_USER			"test"
#define MQTT_PASS			"testpass"

#define STA_SSID ""
#define STA_PASS ""
#define STA_TYPE AUTH_WPA2_PSK

#define MQTT_RECONNECT_TIMEOUT 	5	/*second*/

#define DEFAULT_SECURITY		0
#define QUEUE_BUFFER_SIZE		2048

#define PROTOCOL_NAMEv31	/*MQTT version 3.1 compatible with Mosquitto v0.15*/
//PROTOCOL_NAMEv311			/*MQTT version 3.11 compatible with https://eclipse.org/paho/clients/testing/*/
#endif

#define PWM1				0
#define PWM2				1

//Pinout changes here

#define MCLR_GPIO 0
#define MCLR_GPIO_MUX PERIPHS_IO_MUX_GPIO0_U
#define MCLR_GPIO_FUNC FUNC_GPIO0

#define SW1_GPIO 4
#define SW1_GPIO_MUX PERIPHS_IO_MUX_GPIO4_U
#define SW1_GPIO_FUNC FUNC_GPIO4

#define SW2_GPIO 5
#define SW2_GPIO_MUX PERIPHS_IO_MUX_GPIO5_U
#define SW2_GPIO_FUNC FUNC_GPIO5

#define DEFAULT_ADJUST 10
