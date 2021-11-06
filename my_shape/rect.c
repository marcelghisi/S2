//
// Created by Marcel Ghisi on 24/10/21.
//
#include <stdio.h>
#include "rect.h"

static uint32_t Rectangle_area_(Shape const * const me);
static void Rectangle_draw_(Shape const * const me);

/* constructor implementation */
void Rectangle_ctor(Rectangle * const me, int16_t x, int16_t y,
                    uint16_t width, uint16_t height)
{
    static struct ShapeVtbl const vtbl = { /* vtbl of the Rectangle class */
            &Rectangle_area_,
            &Rectangle_draw_
    };
    Shape_ctor(&me->super, x, y);
    me->super.vptr = &vtbl;
    /* next, you initialize the attributes added by this subclass... */
    me->width = width;
    me->height = height;
}

static uint32_t Rectangle_area_(Shape const * const me) {
    Rectangle const * const me_ = (Rectangle const *)me; /* explicit downcast */
    return (uint32_t)me_->width * (uint32_t)me_->height;
}

static void Rectangle_draw_(Shape const * const me) {
    Rectangle const * const me_ = (Rectangle const *)me; /* explicit downcast */
    printf("Rectangle_draw_(x=%d,y=%d,width=%d,height=%d)\n", me_->super.x, me_->super.y, me_->width, me_->height);
    printf("Rectangle_area_(x=%d,y=%d,width=%d,height=%d)\n", me_->super.x, me_->super.y, me_->width, me_->height);
}
