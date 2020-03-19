# Github workflow to compile all examples of an Arduino library and check for errors
Inspired and partially using the [setup-arduino-cli](https://github.com/arduino/setup-arduino-cli) Action.

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://spdx.org/licenses/MIT.html)
[![Actions Status Release](https://github.com/ArminJo/Github-Actions/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)
[![Actions Status Test](https://github.com/ArminJo/Github-Actions/workflows/test/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)
[![Hit Counter](https://hitcounter.pythonanywhere.com/count/tag.svg?url=https%3A%2F%2Fgithub.com%2FArminJo%2FGithub-Actions-Test)](https://github.com/brentvollebregt/hit-counter)

This GitHub Action / workflow script compiles all examples of an Arduino library for different boards.<br/>
This repo contains 3 [scripts](https://github.com/ArminJo/Github-Actions/tree/master/.github/workflows).
- [LibraryBuild.yml](https://raw.githubusercontent.com/ArminJo/Github-Actions/master/.github/workflows/LibraryBuild.yml) to compile the examples included.
- [LibraryBuild.yml.example](https://raw.githubusercontent.com/ArminJo/Github-Actions/master/.github/workflows/LibraryBuild.yml.example) to show all configuration options.
- test.yml for internal testing.

# Configuration options
### If you want to build for other platforms than `arduino:avr:` do not forget to specify the `platform-url` parameter per board **or** include an `arduino-cli.yaml` file in your repository root and check if the required url is contained.

#### - **Libraries** required for your builds on a per build basis (which is sufficient) with [`REQUIRED_LIBRARIES:`](https://github.com/ArminJo/Github-Actions/blob/master/.github/workflows/LibraryBuild.yml.example#L25)<br/>
Space separated list without double quotes around the list.<br/>
If you need a library with a space in its name, like Adafruit NeoPixel or Adafruit INA219, you must use double quotes
around the name and have at least 2 entries, where the first must be without double quotes! You may use Servo as dummy entry.

```yaml
REQUIRED_LIBRARIES: Servo "Adafruit NeoPixel"
```

#### - **platform-url** for each board with e.g. [`platform-url:`] if there is no `arduino-cli.yaml` file containing the URL in your repository root.
Sample URL's are:
- http://drazzy.com/package_drazzy.com_index.json
- http://digistump.com/package_digistump_index.json
- http://arduino.esp8266.com/stable/package_esp8266com_index.json
- https://dl.espressif.com/dl/package_esp32_index.json
- https://github.com/stm32duino/BoardManagerFiles/raw/dev/STM32/package_stm_index.json
- https://raw.githubusercontent.com/sparkfun/Arduino_Boards/master/IDE_Board_Manager/package_sparkfun_index.json
- https://files.pololu.com/arduino/package_pololu_index.json

```yaml
platform-url: http://arduino.esp8266.com/stable/package_esp8266com_index.json
```

#### - **Build parameter** like `-DDEBUG` for each board/example combination with [`examples-build-properties:`](https://github.com/ArminJo/Github-Actions/blob/master/.github/workflows/LibraryBuild.yml.example#L62).

```yaml
  examples-build-properties: # the flags were put in compiler.cpp.extra_flags
    PCA9685_Expander_Example:
      -DUSE_PCA9685_SERVO_EXPANDER
      -DDEBUG
```

#### - Examples to be **excluded from build** on a per board basis with [`examples-exclude:`](https://github.com/ArminJo/Github-Actions/blob/master/.github/workflows/LibraryBuild.yml.example#L96).
Space separated list of (unique substrings of) example names to exclude in build

```yaml
  examples-exclude: QuadrupedControl RobotArmControl # QuadrupedControl and RobotArmControl because of missing EEprom
```

#### - **Variants of boards** e.g. for compiling all examples on the same board with different compiler switches like [`arduino:avr:uno|trace`](https://github.com/ArminJo/Github-Actions/blob/master/.github/workflows/LibraryBuild.yml.example#L68).
You may add a suffix behind the **fqbn** with "|" to specify one board for e.g. different compile options like `arduino:avr:uno|trace`

```yaml
- arduino-boards-fqbn: arduino:avr:uno|trace
  platform: arduino:avr
  examples-build-properties: # the flags were put in compiler.cpp.extra_flags
    PCA9685_Expander:
      -DUSE_PCA9685_SERVO_EXPANDER
      -DTRACE
```

# GitHub client integration
To enable my smartgit client to commit to the `.github/workflow` directory without errors, I had to create a new [**Personal access token**](https://github.com/settings/tokens) with repo and **workflow rights** and import it in my client. See also [GitHub documentation for personal access token](https://help.github.com/en/github/authenticating-to-github/creating-a-personal-access-token-for-the-command-line).


## Example usage

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

## Complex configuration
- PlayRtttl [![Build Status](https://github.com/ArminJo/PlayRtttl/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/PlayRtttl/actions)
- ServoEasing [![Build Status](https://github.com/ArminJo/ServoEasing/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/ServoEasing/actions)
- NeoPatterns [![Build Status](https://github.com/ArminJo/NeoPatterns/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/NeoPatterns/actions)

<br/><br/>And here the background story, why this repository was created:

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

