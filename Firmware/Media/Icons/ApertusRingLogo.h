#ifndef APERTUSRINGLOGO_H
#define APERTUSRINGLOGO_H

#include <stdint.h>

#include "../../UI/Widgets/Icon.h"
 
static struct ApertusRingLogo : public Icon {
 
    uint8_t data[14 * 14] = {
0xF0, 0x03, 0xF8, 0x07, 0xFC, 0x0F, 0x3E, 0x1F, 0x1F, 0x3E, 0x0F, 0x3C, 0x07, 0x38, 0x07, 0x38, 0x0F, 0x3C, 0x1F, 0x3E, 0x3E, 0x1F, 0xFC, 0x0F, 0xF8, 0x07, 0xF0, 0x03, };
 
    ApertusRingLogo()
    {
        Icon::Width = 14;
        Icon::Height = 14;
        Icon::Data = &data[0];
    }
}ApertusRingLogo;

#endif // APERTUSRINGLOGO_H
