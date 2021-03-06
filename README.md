iOS, macOS, tvOS and watchOS Analytics for Snowplow
===================================================

[ ![Build Status][travis-image] ][travis]
[ ![Coverage Status][coveralls-image] ][coveralls]
[ ![Version][cocoa-version] ][cocoadocs]
[ ![Platform][cocoa-plaform] ][cocoadocs]
[ ![Carthage][carthage-badge] ][carthage]
[ ![License][license-image] ][license]

## Overview

Add analytics to your iOS, macOS, tvOS and watchOS apps and games with the **[Snowplow][2]** event tracker for **[iOS 8.0+][3]**, **[macOS 10.9+][4]**, **[tvOS 9.0+][5]** and **[watchOS 2.0+][6]**

With this tracker you can collect event data from your applications, games or frameworks.

### Building the Static Framework (iOS only)

* Open `Snowplow.xcworkspace` in Xcode.
* Select the `SnowplowTracker-iOS-Static` scheme and set device to `iOS Device`.
* Run `Archive` from the Product menu.
* Finder should open and show you where `SnowplowTracker.framework` is stored.

### Running the Demo Application (iOS only)

* Open `SnowplowDemo.xcworkspace` in Xcode.
* Select the `SnowplowDemo` scheme and set device to any emulator.
* Hit run and the demo will be installed and launched in the emulator window.
* Simply enter a valid endpoint to send events to!

### Setting up a local testing endpoint

Assuming git, **[Vagrant][vagrant-install]** and **[VirtualBox][virtualbox-install]** installed:

```bash
 host$ git clone https://github.com/snowplow/snowplow-objc-tracker.git
 host$ cd snowplow-objc-tracker
 host$ vagrant up && vagrant ssh
guest$ cd /vagrant
guest$ mb &
guest$ curl -X POST -d @/vagrant/integration-tests/imposter.json http://localhost:2525/imposters
```

Your local endpoint will be `http://localhost:4545` which can be used in the demonstration application.

To view sent events in your browser please navigate to `http://localhost:2525`.

## Find out more
| Technical Docs                 |  Contributing                    |
|--------------------------------|----------------------------------|
| ![i1][techdocs-image]          | ![i2][contributing-image]        |
| **[Technical Docs][techdocs]** | **[Contributing][contributing]** |

## Copyright and license

The Snowplow iOS/macOS/tvOS/watchOS Tracker is copyright 2013-2020 Snowplow Analytics Ltd.

Licensed under the **[Apache License, Version 2.0][license]** (the "License");
you may not use this software except in compliance with the License.

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

[2]: http://snowplowanalytics.com/
[3]: https://www.apple.com/ios/
[4]: https://www.apple.com/macos/
[5]: https://www.apple.com/tv/
[6]: https://www.apple.com/watchos/

[travis]: https://travis-ci.org/snowplow/snowplow-objc-tracker
[travis-image]: https://travis-ci.org/snowplow/snowplow-objc-tracker.svg?branch=master

[coveralls]: https://coveralls.io/github/snowplow/snowplow-objc-tracker?branch=master
[coveralls-image]: https://coveralls.io/repos/github/snowplow/snowplow-objc-tracker/badge.svg?branch=master
[license]: http://www.apache.org/licenses/LICENSE-2.0
[license-image]: https://img.shields.io/cocoapods/l/SnowplowTracker.svg

[cocoadocs]: http://cocoadocs.org/docsets/SnowplowTracker
[cocoa-version]: http://cocoapod-badges.herokuapp.com/v/SnowplowTracker/badge.png
[cocoa-plaform]: http://cocoapod-badges.herokuapp.com/p/SnowplowTracker/badge.png

[carthage]: https://github.com/Carthage/Carthage
[carthage-badge]: https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat

[techdocs-image]: https://d3i6fms1cm1j0i.cloudfront.net/github/images/techdocs.png
[contributing-image]: https://d3i6fms1cm1j0i.cloudfront.net/github/images/contributing.png

[techdocs]: https://docs.snowplowanalytics.com/docs/collecting-data/collecting-from-own-applications/objective-c-tracker/
[contributing]: https://github.com/snowplow/snowplow/wiki/Contributing

[vagrant-install]: http://docs.vagrantup.com/v2/installation/index.html
[virtualbox-install]: https://www.virtualbox.org/wiki/Downloads
