/* Copyright (c) Microsoft Corporation. All rights reserved.
   Licensed under the MIT License. */

// This header contains the peripheral pinout definitions for the
// WIZNET Azure Sphere Guardian 200 (ASG200)

// This file is autogenerated from ../../wiznet_asg200.json.  Do not edit it directly.

#pragma once
#include "../../../avnet_aesms_mt3620/inc/hw/avnet_aesms_mt3620.h"

// Connection status LED uses GPIO4.
#define WIZNET_ASG200_CONNECTION_STATUS_LED AVNET_AESMS_PIN8_GPIO4

// WLAN status LED uses GPIO8.
#define WIZNET_ASG200_WLAN_STATUS_LED AVNET_AESMS_PIN11_GPIO8

// Ethernet 0 status LED uses GPIO9.
#define WIZNET_ASG200_ETH0_STATUS_LED AVNET_AESMS_PIN12_GPIO9

// Ethernet 1 status LED uses GPIO10.
#define WIZNET_ASG200_ETH1_STATUS_LED AVNET_AESMS_PIN13_GPIO10

// User Button uses GPIO13.
#define WIZNET_ASG200_USER_BUTTON AVNET_AESMS_PIN15_GPIO13

// Ethernet 0 use GPIO5 as interrupt pin.
#define WIZNET_ASG200_ETH0_INT AVNET_AESMS_PIN9_GPIO5

// Ethernet 1 use GPIO2 as interrupt pin.
#define WIZNET_ASG200_ETH1_INT AVNET_AESMS_PIN7_GPIO2

// Ethernet 0 connected to SPI using ISU0. (with Microchip ENC28j60 for Public network)
#define WIZNET_ASG200_ETH0_SPI AVNET_AESMS_ISU0_SPI

// Ethernet 1 connected to SPI using ISU1, pin MISO (MISO), pin SCK (SCLK), pin MOSI (MOSI) and pin CS (CSB). (with WIZnet W5500 for Private network)
#define WIZNET_ASG200_ETH1_SPI AVNET_AESMS_ISU1_SPI

// MT3620 SPI Chip Select (CS) value "B". This is not a peripheral identifier, and so has no meaning in an app manifest.
#define WIZNET_ASG200_SPI_CS MT3620_SPI_CS_B
