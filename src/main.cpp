#include "../include/utils/constants.hpp"
#include "../include/utils/vector.hpp"
#include <cstdio>
#include <cmath>

using namespace ReactiveEngine::Math;

int main(int argc, char **argv) {
    puts("Hello from Reactive Engine!");
    Vec2 a = Vec2::right();
    Vec2 b = Vec2(1, std::sqrt(3));
    printf("%lf\n", Vec2::get_angle_between_vectors(a, b) * 180 / PI);
}