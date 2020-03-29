# Github workflow test script for development and testing the [arduino-test-compile](https://github.com/ArminJo/arduino-test-compile) action and bash script

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://spdx.org/licenses/MIT.html)
[![Build Status](https://github.com/ArminJo/Github-Actions/workflows/LibraryBuildWithSteps/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)
[![Build Status](https://github.com/ArminJo/Github-Actions/workflows/LibraryBuildWithAction/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)
[![Build Status](https://github.com/ArminJo/Github-Actions/workflows/LibraryBuildWithScript/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)
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
- Arduino-FrequencyDetector [![Build Status](https://github.com/ArminJo/Arduino-FrequencyDetector/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/Arduino-FrequencyDetector/actions)
- Arduino-OpenWindowAlarm [![Build Status](https://github.com/ArminJo/Arduino-OpenWindowAlarm/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/Arduino-OpenWindowAlarm/actions)
- Talkie [![Build Status](https://github.com/ArminJo/Talkie/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/Talkie/actions)

## Simple configuration
- ATtinySerialOut [![Build Status](https://github.com/ArminJo/ATtinySerialOut/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/ATtinySerialOut/actions)
- Arduino-BlueDisplay [![Build Status](https://github.com/ArminJo/Arduino-BlueDisplay/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/Arduino-BlueDisplay/actions)
- Arduino-Utils [![Build Status](https://github.com/ArminJo/Arduino-Utils/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/Arduino-Utils/actions)
- EasyButtonAtInt01 [![Build Status](https://github.com/ArminJo/EasyButtonAtInt01/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/EasyButtonAtInt01/actions)
- irmp [![Build Status](https://github.com/ukw100/irmp/workflows/LibraryBuild/badge.svg)](https://github.com/ukw100/irmp/actions)
- LightweightServo [![Build Status](https://github.com/ArminJo/LightweightServo/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/LightweightServo/actions)
- QuadrupedControl [![Build Status](https://github.com/ArminJo/QuadrupedControl/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/QuadrupedControl/actions)

## Sketches
- Simple-DSO [![Build Status](https://github.com/ArminJo/Arduino-Simple-DSO/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Arduino-Simple-DSO/actions)
- RobotCar [![Build Status](https://github.com/ArminJo/Arduino-RobotCar/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Arduino-RobotCar/actions)
- SBM-Info [![Build Status](https://github.com/ArminJo/Smart-Battery-Module-Info_For_Arduino/workflows/TestCompile/badge.svg)](https://github.com/ArminJo/Smart-Battery-Module-Info_For_Arduino/actions)


## Complex configuration
- PlayRtttl [![Build Status](https://github.com/ArminJo/PlayRtttl/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/PlayRtttl/actions)
- ServoEasing [![Build Status](https://github.com/ArminJo/ServoEasing/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/ServoEasing/actions)
- NeoPatterns [![Build Status](https://github.com/ArminJo/NeoPatterns/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/NeoPatterns/actions)

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

