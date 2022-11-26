# Off Target Test Harness
An off target test harness that can be run on a Raspberry Pi 4 or x86 Linux system. Uses a minimal shim layer to emulate `FatFS`  
Decodes an mp3 file for 5 seconds, generating a wav file. Prints how much faster than real time the decode is.
## To Build and Run
1. `make` from this (test) directory  
2. `.\build\decode input_mp3_file output_wav_file` 
### To Build using MS Visual Studio Code
1) Install the VSC Microsoft `Makefile Tool` extension  
2) Select the extensions settings (list installed extensions, click cog, select *Extension Settings* from menu)  
a) Set the `Makefile: Make Directory` to `./test`  
b) Set the `Makefile: Makefile Path` to `./test/Makefile`  
3) Set the Makefile Build target to build/decode 
4) Trigger build from the Makefile Extension build icon