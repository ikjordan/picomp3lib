# picomp3lib
## mp3 C library for Raspberry Pico  
Based on the helix mp3 library created by RealNetworks in 2003    
Additions for ARM from AdaFruit https://github.com/adafruit/Adafruit_MP3  

## Further Changes
1. Size of frame returned by `MP3FrameInfo`
2. Improved `MULSHIFT32` for ARM Cortex M0+
3. Cmake files, so can be used as a library for Pico

## Directory Structure
`src`  
Base sourec code for library  

`interface`  
High level interface to decoder. Uses `FatFS` to access files.  
See https://github.com/carlk3/no-OS-FatFS-SD-SPI-RPi-Pico for a Pico compatible `FatFS` library   
Decode triggered by call to `musicFileRead` populate a supplied buffer. By defualt plays file in loop, can be overridden by specifying `-DNO_LOOP`  

`test`   
An off target test harness that can be run on a Raspberry Pi 4, uses a shim layer to emulate `FatFS`

## Usage
For examples of how to use this library as submodule please see:
1. https://github.com/ikjordan/picosounds
2. https://github.com/ikjordan/picomp3test


