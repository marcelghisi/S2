//
// Created by Marcel Ghisi on 24/10/21.
//

#ifndef MY_SHAPE_RECT_H
#define MY_SHAPE_RECT_H
#include <stdint.h>
#include "shape.h" /* the base class interface */
/* Rectangle's attributes... */
typedef struct {
    Shape super; /* <== inherits Shape */
    /* attributes added by this subclass... */ uint16_t width;
    uint16_t height;
} Rectangle;

/* constructor prototype */
void Rectangle_ctor(Rectangle * const me, int16_t x, int16_t y,
                    uint16_t width, uint16_t height);

#endif //MY_SHAPE_RECT_H
