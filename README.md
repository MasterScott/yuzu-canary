# Merge log

Scroll down for the original README.md!

Base revision: d992909636269cde90cf6cb3749ccffcff9a6c56

|Pull Request|Commit|Title|Author|Merged?|
|----|----|----|----|----|
|[1](https://github.com/yuzu-emu/yuzu-canary/pull/1)|[a8dfe54](https://github.com/yuzu-emu/yuzu-canary/pull/1/files/)|Canary Base|[chris062689](https://github.com/chris062689)|Yes|
|[2661](https://github.com/yuzu-emu/yuzu/pull/2661)|[b82b5e4](https://github.com/yuzu-emu/yuzu/pull/2661/files/)|audren: Only manage wave buffers with a size|[ogniK5377](https://github.com/ogniK5377)|Yes|
|[2659](https://github.com/yuzu-emu/yuzu/pull/2659)|[4705d1b](https://github.com/yuzu-emu/yuzu/pull/2659/files/)|rasterizer_cache: Protect inherited caches from submission level|[FernandoS27](https://github.com/FernandoS27)|Yes|
|[2658](https://github.com/yuzu-emu/yuzu/pull/2658)|[965608e](https://github.com/yuzu-emu/yuzu/pull/2658/files/)|IAudioDevice::QueryAudioDeviceOutputEvent|[ogniK5377](https://github.com/ogniK5377)|Yes|
|[2657](https://github.com/yuzu-emu/yuzu/pull/2657)|[472210b](https://github.com/yuzu-emu/yuzu/pull/2657/files/)|hid:StartLrAssignmentMode, hid:StopLrAssignmentMode, hid:SwapNpadAssignment|[ogniK5377](https://github.com/ogniK5377)|Yes|
|[2651](https://github.com/yuzu-emu/yuzu/pull/2651)|[7e5d777](https://github.com/yuzu-emu/yuzu/pull/2651/files/)|apm: Initial implementation of performance config and boost mode|[DarkLordZach](https://github.com/DarkLordZach)|Yes|
|[2650](https://github.com/yuzu-emu/yuzu/pull/2650)|[c88190f](https://github.com/yuzu-emu/yuzu/pull/2650/files/)|mii: Implement IDatabaseService SetInterfaceVersion|[DarkLordZach](https://github.com/DarkLordZach)|Yes|
|[2642](https://github.com/yuzu-emu/yuzu/pull/2642)|[d40f389](https://github.com/yuzu-emu/yuzu/pull/2642/files/)|fsp-srv: Implement Access Logging Functionality|[DarkLordZach](https://github.com/DarkLordZach)|Yes|
|[2613](https://github.com/yuzu-emu/yuzu/pull/2613)|[7d417d5](https://github.com/yuzu-emu/yuzu/pull/2613/files/)|Implemented InitializeApplicationInfo & InitializeApplicationInfoRestricted|[ogniK5377](https://github.com/ogniK5377)|Yes|
|[2612](https://github.com/yuzu-emu/yuzu/pull/2612)|[a2f11d2](https://github.com/yuzu-emu/yuzu/pull/2612/files/)|prepo: Implement New, System, and Non-User variants of SaveReport|[DarkLordZach](https://github.com/DarkLordZach)|Yes|
|[2608](https://github.com/yuzu-emu/yuzu/pull/2608)|[f67039c](https://github.com/yuzu-emu/yuzu/pull/2608/files/)|Implement Time::GetSharedMemoryNativeHandle|[ogniK5377](https://github.com/ogniK5377)|Yes|
|[2604](https://github.com/yuzu-emu/yuzu/pull/2604)|[dfe4b3f](https://github.com/yuzu-emu/yuzu/pull/2604/files/)|Implemented INotificationService|[ogniK5377](https://github.com/ogniK5377)|Yes|
|[2601](https://github.com/yuzu-emu/yuzu/pull/2601)|[6e1db6b](https://github.com/yuzu-emu/yuzu/pull/2601/files/)|Implement a new Texture Cache|[FernandoS27](https://github.com/FernandoS27)|Yes|
|[2592](https://github.com/yuzu-emu/yuzu/pull/2592)|[67fecf3](https://github.com/yuzu-emu/yuzu/pull/2592/files/)|Implement GPU Synchronization Mechanisms & Correct NVFlinger|[FernandoS27](https://github.com/FernandoS27)|Yes|
|[2542](https://github.com/yuzu-emu/yuzu/pull/2542)|[7aeb676](https://github.com/yuzu-emu/yuzu/pull/2542/files/)|lbl: Implement brightness and backlight services|[DarkLordZach](https://github.com/DarkLordZach)|Yes|
|[2418](https://github.com/yuzu-emu/yuzu/pull/2418)|[4b1560b](https://github.com/yuzu-emu/yuzu/pull/2418/files/)|es: Implement various ticket accessor commands from IEticketService|[DarkLordZach](https://github.com/DarkLordZach)|Yes|
|[2365](https://github.com/yuzu-emu/yuzu/pull/2365)|[cfe7a70](https://github.com/yuzu-emu/yuzu/pull/2365/files/)|Workaround to Mutex Corruption|[FernandoS27](https://github.com/FernandoS27)|Yes|
|[1703](https://github.com/yuzu-emu/yuzu/pull/1703)|[09d8109](https://github.com/yuzu-emu/yuzu/pull/1703/files/)|nvdrv: Stub nvdec/vic ioctls to bypass nvdec movies|[DarkLordZach](https://github.com/DarkLordZach)|Yes|
|[1340](https://github.com/yuzu-emu/yuzu/pull/1340)|[c359c00](https://github.com/yuzu-emu/yuzu/pull/1340/files/)|Implement a Better Ignore Assert - DO NOT CHECK IN|[FernandoS27](https://github.com/FernandoS27)|Yes|
|[1012](https://github.com/yuzu-emu/yuzu/pull/1012)|[7b98ac7](https://github.com/yuzu-emu/yuzu/pull/1012/files/)|filesystem: Create directory if it dosen't exist on open|[DarkLordZach](https://github.com/DarkLordZach)|Yes|


End of merge log. You can find the original README.md below the break.

------

yuzu emulator
=============
[![Travis CI Build Status](https://travis-ci.org/yuzu-emu/yuzu.svg?branch=master)](https://travis-ci.org/yuzu-emu/yuzu)
[![AppVeyor CI Build Status](https://ci.appveyor.com/api/projects/status/77k97svb2usreu68?svg=true)](https://ci.appveyor.com/project/bunnei/yuzu)

yuzu is an experimental open-source emulator for the Nintendo Switch from the creators of [Citra](https://citra-emu.org/).

It is written in C++ with portability in mind, with builds actively maintained for Windows, Linux and macOS. The emulator is currently only useful for homebrew development and research purposes.

yuzu only emulates a subset of Switch hardware and therefore is generally only useful for running/debugging homebrew applications. yuzu can boot some games, to varying degrees of success.

yuzu is licensed under the GPLv2 (or any later version). Refer to the license.txt file included.

Check out our [website](https://yuzu-emu.org/)!

For development discussion, please join us on [Discord](https://discord.gg/XQV6dn9).

### Development

Most of the development happens on GitHub. It's also where [our central repository](https://github.com/yuzu-emu/yuzu) is hosted.

If you want to contribute please take a look at the [Contributor's Guide](CONTRIBUTING.md) and [Developer Information](https://github.com/yuzu-emu/yuzu/wiki/Developer-Information). You should as well contact any of the developers on Discord in order to know about the current state of the emulator.

### Building

* __Windows__: [Windows Build](https://github.com/yuzu-emu/yuzu/wiki/Building-For-Windows)
* __Linux__: [Linux Build](https://github.com/yuzu-emu/yuzu/wiki/Building-For-Linux)
* __macOS__: [macOS Build](https://github.com/yuzu-emu/yuzu/wiki/Building-for-macOS)


### Support
We happily accept monetary donations or donated games and hardware. Please see our [donations page](https://yuzu-emu.org/donate/) for more information on how you can contribute to yuzu. Any donations received will go towards things like:
* Switch consoles to explore and reverse-engineer the hardware
* Switch games for testing, reverse-engineering, and implementing new features
* Web hosting and infrastructure setup
* Software licenses (e.g. Visual Studio, IDA Pro, etc.)
* Additional hardware (e.g. GPUs as-needed to improve rendering support, other peripherals to add support for, etc.)

We also more than gladly accept used Switch consoles, preferably ones with firmware 3.0.0 or lower! If you would like to give yours away, don't hesitate to join our [Discord](https://discord.gg/VXqngT3) and talk to bunnei. You may also contact: donations@yuzu-emu.org.
