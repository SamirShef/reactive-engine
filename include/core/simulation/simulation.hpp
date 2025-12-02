#pragma once
#include "../body/body.hpp"
#include <algorithm>
#include <vector>

namespace ReactiveEngine {
    namespace Simulation {
        class Simulation {
            std::vector<Body::Body> bodies;

        public:
            void add_body(Body::Body& body) {
                bodies.push_back(body);
            }

            void delete_body(Body::Body& body) {
                if (std::find(bodies.begin(), bodies.end(), body) != bodies.end()) {
                    bodies.erase(std::remove(bodies.begin(), bodies.end(), body), bodies.end());
                }
            }

            void delete_body_at(size_t index) {
                if (index < bodies.size()) {
                    bodies.erase(bodies.begin() + index);
                }
            }

            void simulate();
        };
    }
}