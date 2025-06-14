# STM32 Alarm Clock System

This project implements a multi-alarm clock using the STM32G030K6T6 microcontroller. It displays real-time clock data on a 16x2 LCD, allows the user to set predefined alarms using four push-button switches, and signals alarms using a buzzer. The system is built using STM32CubeIDE and HAL libraries.

## Project Description

The system continuously reads real-time data from an RTC module and displays it on an LCD. The user can press any of the four switches to configure alarms:

- **Switch 1**: Sets an alarm at 08:00 AM
- **Switch 2**: Sets alarms at 08:00 AM and 02:00 PM
- **Switch 3**: Sets alarms at 08:00 AM, 02:00 PM, and 08:00 PM
- **Switch 4**: Resets all alarms

Each selection updates the LCD to confirm the active alarms, and when the time matches a set alarm, the buzzer is triggered.

## Features

- Real-time display of time and date using RTC
- 16x2 LCD interface with live updates
- 4 tactile switch inputs for selecting alarm presets
- Predefined alarm configuration logic
- Alarm indication through a buzzer
- Visual feedback of mode selection via LCD messages

## Hardware Used

| Component         | Description                            |
|------------------|----------------------------------------|
| STM32G030K6T6     | 32-bit ARM Cortex-M0+ MCU              |
| DS3231 RTC        | External or internal RTC support       |
| LCD 16x2          | HD44780-compatible display via GPIO    |
| Push Buttons      | 4 switches (SW1 to SW4)                |
| Buzzer            | Active buzzer connected to GPIO        |
| Power Supply      | 3.3V or 5V regulated                   |

## Software and Tools

- STM32CubeIDE
- STM32 HAL Drivers
- Embedded C


## Folder Structure

SA_PROJECT/
├── Core/ # Application source files
├── Drivers/ # HAL drivers
├── STM32_Alarm.ioc # STM32CubeMX configuration file
├── README.md # Project documentation
└── ...
