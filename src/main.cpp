#include "../include/utils/constants.hpp"
#include "../include/utils/vector.hpp"
#include "../include/utils/matrix.hpp"
#include <stdio.h>
#include <cmath>

using namespace ReactiveEngine::Math;

int main(int argc, char **argv) {
    puts("Hello from Reactive Engine!");
    Vec2 vec_a = Vec2::right();
    Vec2 vec_b = Vec2(1, std::sqrt(3));
    printf("%lf\n", Vec2::get_angle_between_vectors(vec_a, vec_b) * 180 / PI);
    printf("Vec a: %s, vec b: %s\n", vec_a.to_str(), vec_b.to_str());

    Mat2x2 mat_a = Mat2x2(1, 3, 2, 4);
    printf("Mat a: %s, det: %lf, inverted: %s\n", mat_a.to_str(), mat_a.det(), mat_a.invert().to_str());
}