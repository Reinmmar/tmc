#ifndef RAILINTERSECTIONMANAGER_H
#define RAILINTERSECTIONMANAGER_H

#include "manager.h"

typedef struct {
    Manager base;
    u8 field_0x20[0x16];
    u8 field_0x36;
    u8 field_0x37;
    s16 field_0x38;
    u16 field_0x3a;
    u8 field_0x3c;
    u8 field_0x3d;
    u16 flags;
} RailIntersectionManager;

#endif // RAILINTERSECTIONMANAGER_H
