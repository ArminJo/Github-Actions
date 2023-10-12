<div align = center>

# Github workflow test script for development and testing the [arduino-test-compile action](https://github.com/ArminJo/arduino-test-compile) and [bash script](https://github.com/ArminJo/arduino-test-compile/arduino-test-compile.sh).

## The arduino-test-compile action is also available as an [action in the GitHub Marketplace](https://github.com/marketplace/actions/test-compile-for-arduino).

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://spdx.org/licenses/MIT.html)
[![LibraryBuildWithAction Build Status](https://github.com/ArminJo/Github-Actions/workflows/LibraryBuildWithAction/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)
[![LibraryBuildWithScript Build Status](https://github.com/ArminJo/Github-Actions/workflows/LibraryBuildWithScript/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)
[![LibraryBuildWithSteps Build Status](https://github.com/ArminJo/Github-Actions/workflows/LibraryBuildWithSteps/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)
[![test Build Status](https://github.com/ArminJo/Github-Actions/workflows/test/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)

</div>

The [arduino-test-compile action](https://github.com/marketplace/actions/test-compile-for-arduino) and script compiles all examples of an Arduino library or just multiple sketches from a repo for different boards with different compile switches.<br/>

This repo contains multiple [sample scripts](https://github.com/ArminJo/Github-Actions/tree/master/.github/workflows).
- [LibraryBuildWithSteps.yml](https://raw.githubusercontent.com/ArminJo/Github-Actions/master/.github/workflows/LibraryBuildWithSteps.yml) to compile the examples included.
- [LibraryBuildWithAction.yml](https://raw.githubusercontent.com/ArminJo/Github-Actions/master/.github/workflows/LibraryBuildWithAction.yml) uses the [ArminJo/arduino-test-compile@master](https://github.com/ArminJo/arduino-test-compile) action instead.
- [LibraryBuildWithScript](https://raw.githubusercontent.com/ArminJo/Github-Actions/master/.github/workflows/LibraryBuildWithScript) uses the [arduino-test-compile.sh](https://github.com/ArminJo/arduino-test-compile/blob/master/arduino-test-compile.sh) bash script instead.
- [test.yml](https://github.com/ArminJo/Github-Actions/master/.github/workflows/test.yml) for internal testing the script.

# GitHub client integration
To enable my smartgit client to commit to the `.github/workflow` directory without errors, I had to create a new [**Personal access token**](https://github.com/settings/tokens) with repo and **workflow rights** and import it in my client. See also [GitHub documentation for personal access token](https://help.github.com/en/github/authenticating-to-github/creating-a-personal-access-token-for-the-command-line).

# List of my GitHub workflows for Arduino libraries
## Libraries
| Name | Stars | Build Status | Release date | Commits since latest | # of build variants |
|-|-|-|-|-|-|
| [Arduino-BlueDisplay](https://github.com/ArminJo/Arduino-BlueDisplay) | ![Stars](https://img.shields.io/github/stars/ArminJo/Arduino-BlueDisplay?style=plastic) | [![Build Status](https://github.com/ArminJo/Arduino-BlueDisplay/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/Arduino-BlueDisplay/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/Arduino-BlueDisplay) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/Arduino-BlueDisplay/latest)](https://github.com/ArminJo/Arduino-BlueDisplay/commits/master) | 9 |
| [Arduino-FrequencyDetector](https://github.com/ArminJo/Arduino-FrequencyDetector) | ![Stars](https://img.shields.io/github/stars/ArminJo/Arduino-FrequencyDetector?style=plastic) | [![Build Status](https://github.com/ArminJo/Arduino-FrequencyDetector/workflows/LibraryBuildWithAction/badge.svg)](https://github.com/ArminJo/Arduino-FrequencyDetector/actions)<br/>[![Build Status](https://github.com/ArminJo/Arduino-FrequencyDetector/workflows/LibraryBuildWithScript/badge.svg)](https://github.com/ArminJo/Arduino-FrequencyDetector/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/Arduino-FrequencyDetector) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/Arduino-FrequencyDetector/latest)](https://github.com/ArminJo/Arduino-FrequencyDetector/commits/master) | 3 |
| [Arduino-Lessons-for-School](https://github.com/ArminJo/Arduino-Lessons-for-School) | ![Stars](https://img.shields.io/github/stars/ArminJo/Arduino-Lessons-for-School?style=plastic) | [![Build Status](https://github.com/ArminJo/Arduino-Lessons-for-School/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Arduino-Lessons-for-School/actions) | | |
| [Arduino-Utils](https://github.com/ArminJo/Arduino-Utils) | ![Stars](https://img.shields.io/github/stars/ArminJo/Arduino-Utils?style=plastic) | [![Build Status](https://github.com/ArminJo/Arduino-Utils/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/Arduino-Utils/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/Arduino-Utils) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/Arduino-Utils/latest)](https://github.com/ArminJo/Arduino-Utils/commits/master) | 2 |
| [ATtinySerialOut](https://github.com/ArminJo/ATtinySerialOut) | ![Stars](https://img.shields.io/github/stars/ArminJo/ATtinySerialOut?style=plastic) | [![Build Status](https://github.com/ArminJo/ATtinySerialOut/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/ATtinySerialOut/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/ATtinySerialOut) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/ATtinySerialOut/latest)](https://github.com/ArminJo/ATtinySerialOut/commits/master) | 5 |
| [AVR Tracing](https://github.com/ArminJo/AvrTracing) | ![Stars](https://img.shields.io/github/stars/ArminJo/AvrTracing?style=plastic) | [![Build Status](https://github.com/ArminJo/AvrTracing/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/AvrTracing/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/AvrTracing) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/AvrTracing/latest)](https://github.com/ArminJo/AvrTracing/commits/master) | 1 |
| [Digistump](https://github.com/ArminJo/DigistumpArduino) | ![Stars](https://img.shields.io/github/stars/ArminJo/DigistumpArduino?style=plastic) | [![TestCompile](https://github.com/ArminJo/DigistumpArduino/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/DigistumpArduino/actions)<br/>[![TestRelease](https://github.com/ArminJo/DigistumpArduino/workflows/TestRelease/badge.svg)](https://github.com/ArminJo/DigistumpArduino/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/DigistumpArduino) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/DigistumpArduino/latest)](https://github.com/ArminJo/DigistumpArduino/commits/master) | 2 |
| [EasyButtonAtInt01](https://github.com/ArminJo/EasyButtonAtInt01) | ![Stars](https://img.shields.io/github/stars/ArminJo/EasyButtonAtInt01?style=plastic) | [![Build Status](https://github.com/ArminJo/EasyButtonAtInt01/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/EasyButtonAtInt01/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/EasyButtonAtInt01) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/EasyButtonAtInt01/latest)](https://github.com/ArminJo/EasyButtonAtInt01/commits/master) | 6 |
| [LightweightServo](https://github.com/ArminJo/LightweightServo) | ![Stars](https://img.shields.io/github/stars/ArminJo/LightweightServo?style=plastic) | [![Build Status](https://github.com/ArminJo/LightweightServo/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/LightweightServo/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/LightweightServo) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/LightweightServo/latest)](https://github.com/ArminJo/LightweightServo/commits/master) | 0 |
| [LCDBigNumbers](https://github.com/ArminJo/LCDBigNumbers) | ![Stars](https://img.shields.io/github/stars/ArminJo/LCDBigNumbers?style=plastic) | [![Build Status](https://github.com/ArminJo/LCDBigNumbers/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/LCDBigNumbers/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/LCDBigNumbers) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/LCDBigNumbers/latest)](https://github.com/ArminJo/LCDBigNumbers/commits/master) | 0 |
| [NeoPatterns](https://github.com/ArminJo/NeoPatterns) | ![Stars](https://img.shields.io/github/stars/ArminJo/NeoPatterns?style=plastic) | [![Build Status](https://github.com/ArminJo/NeoPatterns/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/NeoPatterns/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/NeoPatterns) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/NeoPatterns/latest)](https://github.com/ArminJo/NeoPatterns/commits/master) | 6 |
| [PlayRtttl](https://github.com/ArminJo/PlayRtttl) | ![Stars](https://img.shields.io/github/stars/ArminJo/PlayRtttl?style=plastic) | [![Build Status](https://github.com/ArminJo/PlayRtttl/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/PlayRtttl/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/PlayRtttl) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/PlayRtttl/latest)](https://github.com/ArminJo/PlayRtttl/commits/master) | 8 |
| [PWMMotorControl](https://github.com/ArminJo/PWMMotorControl) | ![Stars](https://img.shields.io/github/stars/ArminJo/PWMMotorControl?style=plastic) | [![Build Status](https://github.com/ArminJo/PWMMotorControl/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/PWMMotorControl/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/PWMMotorControl) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/PWMMotorControl/latest)](https://github.com/ArminJo/PWMMotorControl/commits/master) | 2 |
| [QuadrupedControl](https://github.com/ArminJo/QuadrupedControl) | ![Stars](https://img.shields.io/github/stars/ArminJo/QuadrupedControl?style=plastic) | [![Build Status](https://github.com/ArminJo/QuadrupedControl/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/QuadrupedControl/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/QuadrupedControl) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/QuadrupedControl/latest)](https://github.com/ArminJo/QuadrupedControl/commits/master) | 2 |
| [ServoEasing](https://github.com/ArminJo/ServoEasing) | ![Stars](https://img.shields.io/github/stars/ArminJo/ServoEasing?style=plastic) | [![Build Status](https://github.com/ArminJo/ServoEasing/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/ServoEasing/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/ServoEasing) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/ServoEasing/latest)](https://github.com/ArminJo/ServoEasing/commits/master) | 12 |
| [Talkie](https://github.com/ArminJo/Talkie) | ![Stars](https://img.shields.io/github/stars/ArminJo/Talkie?style=plastic) | [![Build Status](https://github.com/ArminJo/Talkie/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/Talkie/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/Talkie) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/Talkie/latest)](https://github.com/ArminJo/Talkie/commits/master) | 8 |


## Third Party
| Name | Stars | Build Status | Release date | Commits since latest | # of build variants |
|-|-|-|-|-|-|
| [DigitalWritefast](https://github.com/ArminJo/DigitalWritefast) | ![Stars](https://img.shields.io/github/stars/ArminJo/DigitalWritefast?style=plastic) | [![Build Status](https://github.com/ArminJo/DigitalWritefast/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/DigitalWritefast/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/DigitalWritefast) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/DigitalWritefast/latest)](https://github.com/ArminJo/DigitalWritefast/commits/master) | 6 |
| [IRMP](https://github.com/IRMP-org/IRMP) | ![Stars](https://img.shields.io/github/stars/IRMP-org/IRMP?style=plastic) | [![Build Status](https://github.com/IRMP-org/IRMP/workflows/LibraryBuild/badge.svg)](https://github.com/IRMP-org/IRMP/actions) | ![Release date](https://img.shields.io/github/release-date/IRMP-org/IRMP) | [![Commits since latest](https://img.shields.io/github/commits-since/IRMP-org/IRMP/latest)](https://github.com/IRMP-org/IRMP/commits/master) | 17 |
| [IRremote](https://github.com/Arduino-IRremote/Arduino-IRremote) | ![Stars](https://img.shields.io/github/stars/Arduino-IRremote/Arduino-IRremote?style=plastic) | [![LibraryBuild](https://github.com/Arduino-IRremote/Arduino-IRremote/workflows/LibraryBuild/badge.svg)](https://github.com/Arduino-IRremote/Arduino-IRremote/actions) |  ![Release date](https://img.shields.io/github/release-date/Arduino-IRremote/Arduino-IRremote) | [![Commits since latest](https://img.shields.io/github/commits-since/Arduino-IRremote/Arduino-IRremote/latest)](https://github.com/Arduino-IRremote/Arduino-IRremote/commits/master) | 26 |


## Sketches
| Name | Stars | Build Status | Release date | Commits since latest | # of build variants |
|-|-|-|-|-|-|
| [Arduino-DTSU666H_PowerMeter](https://github.com/ArminJo/Arduino-DTSU666H_PowerMeter) | ![Stars](https://img.shields.io/github/stars/ArminJo/Arduino-DTSU666H_PowerMeter?style=plastic) | [![Build Status](https://github.com/ArminJo/Arduino-DTSU666H_PowerMeter/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Arduino-DTSU666H_PowerMeter/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/Arduino-DTSU666H_PowerMeter) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/Arduino-DTSU666H_PowerMeter/latest)](https://github.com/ArminJo/Arduino-DTSU666H_PowerMeter/commits/master) | 2 |
| [Arduino-OpenWindowAlarm](https://github.com/ArminJo/Arduino-OpenWindowAlarm) | ![Stars](https://img.shields.io/github/stars/ArminJo/Arduino-OpenWindowAlarm?style=plastic) | [![Build Status](https://github.com/ArminJo/Arduino-OpenWindowAlarm/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Arduino-OpenWindowAlarm/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/Arduino-OpenWindowAlarm) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/Arduino-OpenWindowAlarm/latest)](https://github.com/ArminJo/Arduino-OpenWindowAlarm/commits/master) | 2 |
| [Arduino-Simple-DSO](https://github.com/ArminJo/Arduino-Simple-DSO) | ![Stars](https://img.shields.io/github/stars/ArminJo/Arduino-Simple-DSO?style=plastic) | [![Build Status](https://github.com/ArminJo/Arduino-Simple-DSO/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Arduino-Simple-DSO/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/Arduino-Simple-DSO) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/Arduino-Simple-DSO/latest)](https://github.com/ArminJo/Arduino-Simple-DSO/commits/master) | 1 |
| [iButtonProgrammer](https://github.com/ArminJo/iButtonProgrammer) | ![Stars](https://img.shields.io/github/stars/ArminJo/iButtonProgrammer?style=plastic) | [![Build Status](https://github.com/ArminJo/iButtonProgrammer/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/iButtonProgrammer/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/iButtonProgrammer) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/iButtonProgrammer/latest)](https://github.com/ArminJo/iButtonProgrammer/commits/master) | 1 |
| [JK-BMSToPylontechCAN](https://github.com/ArminJo/JK-BMSToPylontechCAN) | ![Stars](https://img.shields.io/github/stars/ArminJo/JK-BMSToPylontechCAN?style=plastic) | [![Build Status](https://github.com/ArminJo/JK-BMSToPylontechCAN/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/JK-BMSToPylontechCAN/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/JK-BMSToPylontechCAN) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/JK-BMSToPylontechCAN/latest)](https://github.com/ArminJo/JK-BMSToPylontechCAN/commits/master) | 3 |
| [OpenledRace](https://github.com/ArminJo/OpenledRace) | ![Stars](https://img.shields.io/github/stars/ArminJo/OpenledRace?style=plastic) | [![Build Status](https://github.com/ArminJo/OpenledRace/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/OpenledRace/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/OpenledRace) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/OpenledRace/latest)](https://github.com/ArminJo/OpenledRace/commits/master) | 1 |
| [RobotCar](https://github.com/ArminJo/Arduino-RobotCar) | ![Stars](https://img.shields.io/github/stars/ArminJo/Arduino-RobotCar?style=plastic) | [![Build Status](https://github.com/ArminJo/Arduino-RobotCar/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Arduino-RobotCar/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/Arduino-RobotCar) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/Arduino-RobotCar/latest)](https://github.com/ArminJo/Arduino-RobotCar/commits/master) | 4 |
| [RobotArmControl](https://github.com/ArminJo/RobotArmControl) | ![Stars](https://img.shields.io/github/stars/ArminJo/RobotArmControl?style=plastic) | [![Build Status](https://github.com/ArminJo/RobotArmControl/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/RobotArmControl/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/RobotArmControl) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/RobotArmControl/latest)](https://github.com/ArminJo/RobotArmControl/commits/master) | 3 |
| [SBM-Info](https://github.com/ArminJo/Smart-Battery-Module-Info_For_Arduino) | ![Stars](https://img.shields.io/github/stars/ArminJo/Smart-Battery-Module-Info_For_Arduino?style=plastic) | [![Build Status](https://github.com/ArminJo/Smart-Battery-Module-Info_For_Arduino/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Smart-Battery-Module-Info_For_Arduino/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/Smart-Battery-Module-Info_For_Arduino) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/Smart-Battery-Module-Info_For_Arduino/latest)](https://github.com/ArminJo/Smart-Battery-Module-Info_For_Arduino/commits/master) | 1 |
| [SimpleTouchScreenDSO](https://github.com/ArminJo/SimpleTouchScreenDSO) | ![Stars](https://img.shields.io/github/stars/ArminJo/SimpleTouchScreenDSO?style=plastic) | [![Build Status](https://github.com/ArminJo/SimpleTouchScreenDSO/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/SimpleTouchScreenDSO/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/SimpleTouchScreenDSO) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/SimpleTouchScreenDSO/latest)](https://github.com/ArminJo/SimpleTouchScreenDSO/commits/master) | 1 |
| [UltimateBatteryTester](https://github.com/ArminJo/Ultimate-Battery-Tester) | ![Stars](https://img.shields.io/github/stars/ArminJo/Ultimate-Battery-Tester?style=plastic) | [![Build Status](https://github.com/ArminJo/Ultimate-Battery-Tester/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Ultimate-Battery-Tester/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/Ultimate-Battery-Tester) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/Ultimate-Battery-Tester/latest)](https://github.com/ArminJo/Ultimate-Battery-Tester/commits/master) | 3 |
| [ESP32-Cam-Sewer-inspection-car](https://github.com/ArminJo/ESP32-Cam-Sewer-inspection-car) | ![Stars](https://img.shields.io/github/stars/ArminJo/ESP32-Cam-Sewer-inspection-car?style=plastic) |  | ![Release date](https://img.shields.io/github/release-date/ArminJo/ESP32-Cam-Sewer-inspection-car) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/ESP32-Cam-Sewer-inspection-car/latest)](https://github.com/ArminJo/ESP32-Cam-Sewer-inspection-car/commits/master) | 1 |

# QR codes for the repos above
![QR codes](pictures/All-QR-Codes.png)

<br/><br/>Here the background story, why this action / repository was created:

From Thursday 27.2.2020 21:00 CET out of the blue my Travis-CI account suddenly showed me **"build has errored" on every new commit**.
In the log file I could see *"Timeout waiting for network availability"*  the username was [redacted].
With this account, however, I could see my old builds, which could all be restarted successfully.<br/>
After my support request the same evening, I only got a query, but despite answering, nothing happened.
The next day, after further inquiries (10:00 am + 1:00 pm), someone from America answered at 2:30 pm (8:30 am EST) with **"we are sorry about the hassle"**.
Fine!<br/>
But in the support email it said: *"I think you have made some changes to GitHub handle for the account [redacted]? ... Could you please confirm that you have made changes to account name?"*
After my answer *"I am sorry but I NEVER made any changes to my account. Not on Github nor at travis!!!"* **nothing happened**.<br/>
It seems that, if you don't pay money, you have to live with the fact that your account can be lost (forever?) :-(<br/>
So I invested 2 days to switch the CI to **GitHub Actions** and found that GitHub Actions run about **5 times faster** and of course are better integrated.

Until now (10.3.2020) we had a lot of mail communication, but they were not able to fix the errors :-(.

