#ifndef DISPLAY_H
#define DISPLAY_H

#include <TM1637Display.h>

#define CLK 2
#define DIO 3

#define TEST_DELAY 2000

extern const uint8_t SEG_DONE[];

extern TM1637Display display;

void setupDisplay();
void loopDisplay();

#endif 
