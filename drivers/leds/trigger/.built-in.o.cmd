cmd_drivers/leds/trigger/built-in.o :=  ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL    -r -o drivers/leds/trigger/built-in.o drivers/leds/trigger/ledtrig-timer.o drivers/leds/trigger/ledtrig-oneshot.o drivers/leds/trigger/ledtrig-heartbeat.o drivers/leds/trigger/ledtrig-backlight.o drivers/leds/trigger/ledtrig-gpio.o drivers/leds/trigger/ledtrig-default-on.o drivers/leds/trigger/ledtrig-input.o 