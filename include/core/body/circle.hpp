#pragma once
#include "body.hpp"

namespace ReactiveEngine {
    namespace Body {
        struct Circle : public Body::Body {
            double radius;

            Circle() : radius(1), Body::Body(Body::TYPE_CIRCLE, Math::Vec2::zero(), 0, 1) {}
            Circle(double r, Math::Vec2 p, double a, double m) : radius(r), Body::Body(Body::TYPE_CIRCLE, p, a, m) {}
        };
    }
}