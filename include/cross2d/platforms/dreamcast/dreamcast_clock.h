//
// Created by cpasjuste on 11/02/18.
//

#ifndef C2D_DREAMCAST_CLOCK_H
#define C2D_DREAMCAST_CLOCK_H

#include "cross2d/skeleton/sfml/Clock.hpp"

namespace c2d {

    class DreamCastClock : public Clock {

    public:

        DreamCastClock();

        Time getCurrentTime() const;
    };

}

#endif //C2D_DREAMCAST_CLOCK_H
