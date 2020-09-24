# Github workflow test script for development and testing the [arduino-test-compile](https://github.com/marketplace/actions/test-compile-for-arduino) action and bash script

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://spdx.org/licenses/MIT.html)
[![Build Status](https://github.com/ArminJo/Github-Actions/workflows/LibraryBuildWithAction/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)
[![Build Status](https://github.com/ArminJo/Github-Actions/workflows/LibraryBuildWithScript/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)
[![Build Status](https://github.com/ArminJo/Github-Actions/workflows/LibraryBuildWithSteps/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)
[![Build Status](https://github.com/ArminJo/Github-Actions/workflows/test/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)

[![Build Status](https://github.com/ArminJo/arduino-test-compile/workflows/arduino-test-compile-ActionTest/badge.svg)](https://github.com/ArminJo/arduino-test-compile/actions)
[![Build Status](https://github.com/ArminJo/arduino-test-compile/workflows/arduino-test-compile-ScriptTest/badge.svg)](https://github.com/ArminJo/arduino-test-compile/actions)

The arduino-test-compile action and script compiles all examples of an Arduino library or just multiple sketches from a repo for different boards with different compile switches.<br/>

This repo contains multiple [sample scripts](https://github.com/ArminJo/Github-Actions/tree/master/.github/workflows).
- [LibraryBuildWithSteps.yml](https://raw.githubusercontent.com/ArminJo/Github-Actions/master/.github/workflows/LibraryBuildWithSteps.yml) to compile the examples included.
- [LibraryBuildWithAction.yml](https://raw.githubusercontent.com/ArminJo/Github-Actions/master/.github/workflows/LibraryBuildWithAction.yml) uses the [ArminJo/arduino-test-compile@master](https://github.com/ArminJo/arduino-test-compile) action instead.
- [LibraryBuildWithScript](https://raw.githubusercontent.com/ArminJo/Github-Actions/master/.github/workflows/LibraryBuildWithScript) uses the [arduino-test-compile.sh](https://github.com/ArminJo/arduino-test-compile/blob/master/arduino-test-compile.sh) bash script instead.
- test.yml for internal testing the script.

# GitHub client integration
To enable my smartgit client to commit to the `.github/workflow` directory without errors, I had to create a new [**Personal access token**](https://github.com/settings/tokens) with repo and **workflow rights** and import it in my client. See also [GitHub documentation for personal access token](https://help.github.com/en/github/authenticating-to-github/creating-a-personal-access-token-for-the-command-line).


# List of my GitHub workflows for Arduino libraries
## Minimal configuration
| Name | Build Status | Release date | Commits since latest |
|-|-|-|-|
| Arduino-FrequencyDetector | [![Build Status](https://github.com/ArminJo/Arduino-FrequencyDetector/workflows/LibraryBuildWithAction/badge.svg)](https://github.com/ArminJo/Arduino-FrequencyDetector/actions)<br/>[![Build Status](https://github.com/ArminJo/Arduino-FrequencyDetector/workflows/LibraryBuildWithScript/badge.svg)](https://github.com/ArminJo/Arduino-FrequencyDetector/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/Arduino-FrequencyDetector) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/Arduino-FrequencyDetector/latest)](https://github.com/ArminJo/Arduino-FrequencyDetector/commits/master) |
| Arduino-OpenWindowAlarm | [![Build Status](https://github.com/ArminJo/Arduino-OpenWindowAlarm/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Arduino-OpenWindowAlarm/actions) | | |
| Talkie | [![Build Status](https://github.com/ArminJo/Talkie/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/Talkie/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/Talkie) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/Talkie/latest)](https://github.com/ArminJo/Talkie/commits/master) |


## Simple configuration
| Name | Build Status | Release date | Commits since latest |
|-|-|-|-|
| ATtinySerialOut | [![Build Status](https://github.com/ArminJo/ATtinySerialOut/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/ATtinySerialOut/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/ATtinySerialOut) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/ATtinySerialOut/latest)](https://github.com/ArminJo/ATtinySerialOut/commits/master) |
| Arduino-BlueDisplay | [![Build Status](https://github.com/ArminJo/Arduino-BlueDisplay/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/Arduino-BlueDisplay/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/Arduino-BlueDisplay) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/Arduino-BlueDisplay/latest)](https://github.com/ArminJo/Arduino-BlueDisplay/commits/master) |
| Arduino-Lessons-for-School | [![Build Status](https://github.com/ArminJo/Arduino-Lessons-for-School/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Arduino-Lessons-for-School/actions) | | |
| Arduino-Utils | [![Build Status](https://github.com/ArminJo/Arduino-Utils/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/Arduino-Utils/actions) | | |
| EasyButtonAtInt01 | [![Build Status](https://github.com/ArminJo/EasyButtonAtInt01/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/EasyButtonAtInt01/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/EasyButtonAtInt01) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/EasyButtonAtInt01/latest)](https://github.com/ArminJo/EasyButtonAtInt01/commits/master) |
| irmp | [![Build Status](https://github.com/ukw100/irmp/workflows/LibraryBuild/badge.svg)](https://github.com/ukw100/irmp/actions) | ![Release date](https://img.shields.io/github/release-date/ukw100/irmp) | [![Commits since latest](https://img.shields.io/github/commits-since/ukw100/irmp/latest)](https://github.com/ukw100/irmp/commits/master) |
| LightweightServo | [![Build Status](https://github.com/ArminJo/LightweightServo/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/LightweightServo/actions) | | |
| PWMMotorControl | [![Build Status](https://github.com/ArminJo/PWMMotorControl/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/PWMMotorControl/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/PWMMotorControl) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/PWMMotorControl/latest)](https://github.com/ArminJo/PWMMotorControl/commits/master) |
| QuadrupedControl | [![Build Status](https://github.com/ArminJo/QuadrupedControl/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/QuadrupedControl/actions) | | |

## Sketches
| Name | Build Status |
|-|-|
| RobotCar | [![Build Status](https://github.com/ArminJo/Arduino-RobotCar/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Arduino-RobotCar/actions) |
| SBM-Info | [![Build Status](https://github.com/ArminJo/Smart-Battery-Module-Info_For_Arduino/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Smart-Battery-Module-Info_For_Arduino/actions) |
| Simple-DSO | [![Build Status](https://github.com/ArminJo/Arduino-Simple-DSO/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Arduino-Simple-DSO/actions) |


## Complex configuration
| Name | Build Status | Release date | Commits since latest |
|-|-|-|-|
| Digistump | [![TestCompile](https://github.com/ArminJo/DigistumpArduino/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/DigistumpArduino/actions) | | |
| NeoPatterns | [![Build Status](https://github.com/ArminJo/NeoPatterns/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/NeoPatterns/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/NeoPatterns) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/NeoPatterns/latest)](https://github.com/ArminJo/NeoPatterns/commits/master) |
| PlayRtttl | [![Build Status](https://github.com/ArminJo/PlayRtttl/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/PlayRtttl/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/PlayRtttl) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/PlayRtttl/latest)](https://github.com/ArminJo/PlayRtttl/commits/master) |
| ServoEasing | [![Build Status](https://github.com/ArminJo/ServoEasing/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/ServoEasing/actions) | ![Release date](https://img.shields.io/github/release-date/ArminJo/ServoEasing) | [![Commits since latest](https://img.shields.io/github/commits-since/ArminJo/ServoEasing/latest)](https://github.com/ArminJo/ServoEasing/commits/master) |

## 3.Party
| Name | Build Status | Release date | Commits since latest |
|-|-|-|-|
| IRremote | [![LibraryBuild](https://github.com/z3t0/Arduino-IRremote/workflows/LibraryBuild/badge.svg?branch=beta)](https://github.com/z3t0/Arduino-IRremote/actions) |  ![Release date](https://img.shields.io/github/release-date/z3t0/Arduino-IRremote) | [![Commits since latest](https://img.shields.io/github/commits-since/z3t0/Arduino-IRremote/latest)](https://github.com/z3t0/Arduino-IRremote/commits/master) |


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

