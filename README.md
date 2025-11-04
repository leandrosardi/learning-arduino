## Learning Arduino

Just some Arduino example and documentation.

### Getting Started

Installing Arduino IDE on Ubuntu 22.04:

1. Download Arduino IDE from [https://www.arduino.cc/en/software/#ide](https://www.arduino.cc/en/software/#ide)

2. Install the executable. 

```
sudo mv ~/Downloads/arduino-ide_2.3.6_Linux_64bit.AppImage /usr/bin
sudo chmod +x /usr/bin/arduino-ide_2.3.6_Linux_64bit.AppImage
sudo mv /usr/bin/arduino-ide_2.3.6_Linux_64bit.AppImage /usr/bin/arduino-ide
```

3. The FUSE library (libfuse2) is required.

**Ubuntu 22.04** and newer versions often come without `libfuse2`, because they use `libfuse3` by default. But `arduino-ide` bundles still expect version 2.

```
sudo apt install libfuse2
```

4. Run Arduino IDE

```
arduino-ide
```





