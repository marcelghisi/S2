//
// Created by Marcel Ghisi on 24/10/21.
//

#include <stdio.h>
#include <math.h>
#include "Circle.h"

static uint32_t Circle_area_(Shape const * const me);
static void Circle_draw_(Shape const * const me);

/* constructor implementation */
void Circle_ctor(Circle * const me, int16_t x, int16_t y,
                    uint16_t rad)
                    {
    static struct ShapeVtbl const vtbl = { /* vtbl of the Rectangle class */
            &Circle_area_,
            &Circle_draw_
    };
    Shape_ctor(&me->super, x, y);
    me->super.vptr = &vtbl;
    /* next, you initialize the attributes added by this subclass... */
    me->rad = rad;

}

static uint32_t Circle_area_(Shape const * const me) {
    Circle const * const me_ = (Circle const *)me; /* explicit downcast */
    return M_PI * (pow((uint32_t)me_->rad,2));
}

static void Circle_draw_(Shape const * const me) {
    Circle const * const me_ = (Circle const *)me; /* explicit downcast */
    printf("Circle_draw_(x=%d,y=%d,rad=%d)\n", me_->super.x, me_->super.y, me_->rad);
}