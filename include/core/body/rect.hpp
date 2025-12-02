#pragma once
#include "body.hpp"

namespace ReactiveEngine {
    namespace Body {
        struct Rect : public Body::Body {
            double width, height;

            Rect() : width(1), height(1), Body::Body(Body::TYPE_RECT, Math::Vec2::zero(), 0, 1) {}
            Rect(double w, double h, Math::Vec2 p, double a, double m) : width(w), height(h), Body::Body(Body::TYPE_RECT, p, a, m) {}
        };
    }
}