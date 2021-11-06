//
// Created by Marcel Ghisi on 24/10/21.
//

#ifndef MY_SHAPE_CIRCLE_H
#define MY_SHAPE_CIRCLE_H
#include <stdint.h>
#include "shape.h" /* the base class interface */
/* Rectangle's attributes... */
typedef struct {
    Shape super; /* <== inherits Shape */
    /* attributes added by this subclass... */
    uint16_t rad;
} Circle;

/* constructor prototype */
void Circle_ctor(Circle * const me, int16_t x, int16_t y,
                    uint16_t rad);
#endif //MY_SHAPE_CIRCLE_H
