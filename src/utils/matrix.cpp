#include "../../include/utils/matrix.hpp"
#include <stdlib.h>
#include <stdio.h>

namespace ReactiveEngine {
    namespace Math {
        Mat2x2 Mat2x2::operator +(Mat2x2& other) const {
            return Mat2x2(col1.x + other.col1.x, col1.y + other.col1.y, col2.x + other.col2.x, col2.y + other.col2.y);
        }

        Mat2x2 Mat2x2::operator -(Mat2x2& other) const {
            return Mat2x2(col1.x - other.col1.x, col1.y - other.col1.y, col2.x - other.col2.x, col2.y - other.col2.y);
        }

        Mat2x2 Mat2x2::operator *(Mat2x2 other) const {
            return Mat2x2(col1.x * other.col1.x, col1.y * other.col1.y, col2.x * other.col2.x, col2.y * other.col2.y);
        }

        Vec2 Mat2x2::operator *(Vec2& vec) const {
            return Vec2(col1.x * vec.x + col1.y * vec.y, col2.x * vec.x + col2.y * vec.y);
        }

        Mat2x2 Mat2x2::operator *(double scalar) const {
            return Mat2x2(col1 * scalar, col2 * scalar);
        }

        Mat2x2 Mat2x2::operator /(Mat2x2& other) const {
            return *this * other.invert();
        }

        void Mat2x2::operator +=(Mat2x2& other) {
            *this = *this + other;
        }

        void Mat2x2::operator -=(Mat2x2& other) {
            *this = *this - other;
        }

        void Mat2x2::operator *=(Mat2x2& other) {
            *this = *this * other;
        }

        void Mat2x2::operator *=(double scalar) {
            *this = *this * scalar;
        }

        void Mat2x2::operator /=(Mat2x2& other) {
            *this = *this / other;
        }

        bool Mat2x2::operator ==(Mat2x2& other) {
            return col1.x == other.col1.x && col1.y == other.col1.y && col2.x == other.col2.x && col2.y == other.col2.y;
        }

        bool Mat2x2::operator !=(Mat2x2& other) {
            return !(*this == other);
        }

        Mat2x2 Mat2x2::transpose() const {
            return Mat2x2(col1.x, col2.x, col1.y, col2.y);
        }

        double Mat2x2::det() const {
            return col1.x * col2.y - col1.y * col2.x;
        }

        Mat2x2 Mat2x2::invert() const {
            return *this * (1 / det());
        }

        Mat2x2 Mat2x2::abs() const {
            return Mat2x2(std::abs(col1.x), std::abs(col1.y), std::abs(col2.x), std::abs(col2.y));
        }

        const char *Mat2x2::to_str() const {
            char *str = (char*)malloc(sizeof(char) * 75);
            sprintf(str, "Mat2x2(%lf, %lf, %lf, %lf)", col1.x, col1.y, col2.x, col2.y);
            return str;
        }
    }
}