#pragma once
#include "vector.hpp"

namespace ReactiveEngine {
    namespace Math {
        struct Mat2x2 {
            Vec2 col1;                                          /**< First column of matrix */
            Vec2 col2;                                          /**< Second column of matrix */

            Mat2x2() : col1(Vec2(1, 0)), col2(Vec2(0, 1)) {}
            Mat2x2(Vec2 col1, Vec2 col2) : col1(col1), col2(col2) {}
            Mat2x2(double x1, double y1, double x2, double y2) : col1(x1, y1), col2(x2, y2) {}

            Mat2x2 operator +(Mat2x2& other) const;

            Mat2x2 operator -(Mat2x2& other) const;
            
            Mat2x2 operator *(Mat2x2 other) const;

            Vec2 operator *(Vec2& vec) const;

            Mat2x2 operator *(double scalar) const;
            
            Mat2x2 operator /(Mat2x2& other) const;
            
            void operator +=(Mat2x2& other);

            void operator -=(Mat2x2& other);

            void operator *=(Mat2x2& other);

            void operator *=(double scalar);

            void operator /=(Mat2x2& other);

            bool operator ==(Mat2x2& other);

            bool operator !=(Mat2x2& other);
            
            /**
             * @brief Transpose matrix operation
             * @return Transposed matrix
             */
            Mat2x2 transpose() const;

            /**
             * @brief Calculating an determinant
             * @return Determinant
             */
            double det() const;

            /**
             * @brief Invert matrix operation
             * @return Inverted matrix
             */
            Mat2x2 invert() const;

            /**
             * @brief Changing a matrix values to absolute values
             * @return Absolute matrix
             */
            Mat2x2 abs() const;

            /**
             * @brief Converting matrix to string
             * @return Converted matrix to string
             */
            const char *to_str() const;
        };
    }
}