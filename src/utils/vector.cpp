#include "../../include/utils/vector.hpp"
#include <cmath>

namespace ReactiveEngine {
    namespace Math {
        Vec2 Vec2::operator +(Vec2& other) const {
            return Vec2(x + other.x, y + other.y);
        }
    
        Vec2 Vec2::operator -(Vec2& other) const {
            return Vec2(x - other.x, y - other.y);
        }
    
        Vec2 Vec2::operator *(Vec2& other) const {
            return Vec2(x * other.x, y * other.y);
        }
    
        Vec2 Vec2::operator *(double scalar) const {
            return Vec2(x * scalar, y * scalar);
        }
    
        Vec2 Vec2::operator /(Vec2& other) const {
            return Vec2(x / other.x, y / other.y);
        }
    
        Vec2 Vec2::operator /(double scalar) const {
            return Vec2(x / scalar, y / scalar);
        }
    
        void Vec2::operator +=(Vec2& other) {
            *this = Vec2(x + other.x, y + other.y);
        }
    
        void Vec2::operator -=(Vec2& other) {
            *this = Vec2(x - other.x, y - other.y);
        }
    
        void Vec2::operator *=(Vec2& other) {
            *this = Vec2(x * other.x, y * other.y);
        }
    
        void Vec2::operator *=(double scalar) {
            *this = Vec2(x * scalar, y * scalar);
        }
    
        void Vec2::operator /=(Vec2& other) {
            *this = Vec2(x / other.x, y / other.y);
        }
    
        void Vec2::operator /=(double scalar) {
            *this = Vec2(x / scalar, y / scalar);
        }
    
        bool Vec2::operator ==(Vec2 other) const {
            return x == other.x && y == other.y;
        }
    
        bool Vec2::operator !=(Vec2 other) const {
            return !(*this == other);
        }
    
        double Vec2::length() const {
            return std::sqrt(x * x + y * y);
        }
    
        double Vec2::length_sqr() const {
            return x * x + y * y;
        }
    
        Vec2 Vec2::norm() const {
            double len = length();
            return Vec2(x / len, y / len);
        }
    
        double Vec2::get_angle_between_vectors(Vec2 a, Vec2 b) {
            return std::acos((a * b).length() / (a.length() * b.length()));
        }
    }
}