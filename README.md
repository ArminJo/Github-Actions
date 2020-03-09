# Github actions Test
### [Version 1.0.0]
[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![Actions Status Release](https://github.com/ArminJo/Github-Actions/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)
[![Actions Status Test](https://github.com/ArminJo/Github-Actions/workflows/test/badge.svg)](https://github.com/ArminJo/Github-Actions/actions)
[![Hit Counter](https://hitcounter.pythonanywhere.com/count/tag.svg?url=https%3A%2F%2Fgithub.com%2FArminJo%2FGithub-Actions-Test)](https://github.com/brentvollebregt/hit-counter)


GitHub Action / workflow to test compile all exaples of an arduino library for different boards.<br/>

It is based on the **awesome [setup-arduino-cli](https://github.com/arduino/setup-arduino-cli) Action**.

You can configure:
- **Libraries** needed for your builds on a per buils basis (which is sufficient)
- **Build parameter** like `-DDEBUG` for each board/example combination.
- Examples to **excluded from build** on a per board basis.

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
- PlayRtttl [![Build Status](https://github.com/ArminJo/PlayRtttl/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/PlayRtttl/actions)
- QuadrupedControl [![Build Status](https://github.com/ArminJo/QuadrupedControl/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/QuadrupedControl/actions)

## Complex configuratuion
- ServoEasing [![Build Status](https://github.com/ArminJo/ServoEasing/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/ServoEasing/actions)
- NeoPatterns [![Build Status](https://github.com/ArminJo/NeoPatterns/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/NeoPatterns/actions)

## Complex configuratuion
- ServoEasing [![Build Status](https://github.com/ArminJo/Sworkflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/ServoEasing/actions)
- NeoPatterns [![Build Status](https://github.com/ArminJo/NeoPatterns/workflows/LibraryBuild/badge.svg)](https://github.com/ArminJo/NeoPatterns/actions)


<br/><br/>And here the background story, why this repository was created:

From Thursday 27.2.2020 21:00 CET out of the blue my Travis-CI account suddenly showed me **"build has errored" on every new commit**.
In the log file I could see *"Timeout waiting for network availability"*  the username was [redacted].
With this account, however, I could see my old builds, which could all be restarted successfully.<br/>
After my support request the same evening, I only got a query, but despite answering, nothing happend.
The next day, after further inquiries (10:00 am + 1:00 pm), someone from America answerd at 2:30 pm (8:30 am EST) with **"we are sorry about the hassle"**.
Fine!<br/>
But in the support email it said: *"I think you have made some changes to GitHub handle for the account [redacted]? ... Could you please confirm that you have made changes to account name?"*
After my answer *"I am sorry but I NEVER made any changes to my account. Not on Github nor at travis!!!"* **nothing happend**.<br/>
It seems that, if you don't pay money, you have to live with the fact that your account can be lost (forever?) :-(<br/>
So I invested 2 days to switch the CI to **GitHub Actions** and found that GitHub Actions run about **5 times faster** and of course are better integrated.

