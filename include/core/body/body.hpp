#pragma once
#include "../../utils/vector.hpp"
#include "force.hpp"
#include <vector>

namespace ReactiveEngine {
    namespace Body {
        struct Body {
            enum Type {
                TYPE_CIRCLE,
                TYPE_RECT,
            } type;
            Math::Vec2 pos;
            double angle;
            double mass;
            std::vector<Force> forces;
            
            Body(Type t, Math::Vec2 p, double a, double m) : type(t), pos(p), angle(a), mass(m) {}

            void add_force(Force& force) {
                forces.push_back(force);
            }
        };
    }
}