#ifndef TM1637DISPLAY_H
#define TM1637DISPLAY_H

#include <stdint.h>

class TM1637Display {
public:
    TM1637Display(uint8_t pinClk, uint8_t pinDIO);
    void setBrightness(uint8_t brightness, bool on = true);
    void setSegments(const uint8_t segments[], uint8_t length = 4, uint8_t pos = 0);
    void clear();
    void showNumberDec(int num, bool leading_zero = false, uint8_t length = 4, uint8_t pos = 0);
    void showNumberDecEx(int num, uint8_t dots, bool leading_zero = false, uint8_t length = 4, uint8_t pos = 0);
    void showNumberHexEx(uint16_t num, uint8_t dots = 0, bool leading_zero = false, uint8_t length = 4, uint8_t pos = 0);
    uint8_t encodeDigit(uint8_t digit);
};

#endif // TM1637DISPLAY_H
