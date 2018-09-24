//
// Created by cpasjuste on 13/12/17.
//

#ifndef CROSS2D_LINE_H
#define CROSS2D_LINE_H

#include "object.h"
#include "skeleton/sfml/RectangleShape.hpp"

namespace c2d {

    class Line : public C2DObject, public sfml::RectangleShape {

    public:

        Line(const Vector2f &p1 = Vector2f(0, 0),
             const Vector2f &p2 = Vector2f(0, 0),
             float width = 1);

        virtual ~Line();

    private:

        virtual void draw(Transform &transform);

        std::size_t getPointCount() const;
    };
}

#endif //CROSS2D_LINE_H
