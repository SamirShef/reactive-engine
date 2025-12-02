#pragma once
#include "../../utils/vector.hpp"

namespace ReactiveEngine {
    namespace Body {
        struct Force {
            enum Type {
                TYPE_G,
                TYPE_N,
                TYPE_FRICTION,
            } type;
            Math::Vec2 dir;
            double force;

            Force(Type t, Math::Vec2 d, double f) : type(t), dir(d), force(f) {}
        };
    }
}