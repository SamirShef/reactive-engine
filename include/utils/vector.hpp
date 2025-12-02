#pragma once

namespace ReactiveEngine {
    namespace Math {
        struct Vec2 {
            double x, y;                                                /**< X and Y coordinates */
            
            Vec2(double x, double y) : x(x), y(y) {}
            Vec2(Vec2& vec) : x(vec.x), y(vec.y) {}
    
            Vec2 operator +(Vec2& other) const;
    
            Vec2 operator -(Vec2& other) const;
    
            Vec2 operator *(Vec2& other) const;
    
            Vec2 operator *(double scalar) const;
    
            Vec2 operator /(Vec2& other) const;
    
            Vec2 operator /(double scalar) const;
    
            void operator +=(Vec2& other);
    
            void operator -=(Vec2& other);
    
            void operator *=(Vec2& other);
    
            void operator *=(double scalar);
    
            void operator /=(Vec2& other);
    
            void operator /=(double scalar);
    
            bool operator ==(Vec2 other) const;
    
            bool operator !=(Vec2 other) const;
    
            /**
             * @brief Fast definition the unit vector
             * @return Vector2(1, 1)
             */
            static Vec2 one() {
                return Vec2(1, 1);
            }
    
            /**
             * @brief Fast definition the zero vector
             * @return Vector2(0, 0)
             */
            static Vec2 zero() {
                return Vec2(0, 0);
            }

            /**
             * @brief Fast definition the vector with direction at up
             * @return Vector2(0, 1)
             */
            static Vec2 up() {
                return Vec2(0, 1);
            }

            /**
             * @brief Fast definition the vector with direction at right
             * @return Vector2(1, 0)
             */
            static Vec2 right() {
                return Vec2(1, 0);
            }
    
            /**
            * @brief Length of vector
            * @return Length of vector
            */
            double length() const;
    
            /**
            * @brief Square length of vector
            * @return Square length of vector
            */
            double length_sqr() const;
    
            /**
            * @brief Normilized vector
            * @return Normilized vector
            */
            Vec2 norm() const;

            /**
             * @brief Converting vector to string
             * @return Converted vector to string
             */
            const char *to_str() const;
    
            /**
            * @brief Returns angle between two passed vectors
            * @return Angle between two vectors (as radians)
            */
            static double get_angle_between_vectors(Vec2 a, Vec2 b);
        };
    }
}