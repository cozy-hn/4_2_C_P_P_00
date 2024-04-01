#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main() {
    Point   a(0.0f, 0.0f);
    Point   b(1.0f, 0.0f);
    Point   c(0.0f, 1.0f);

    Point   points[12] = {
        Point(0.1f, 0.1f),    // 삼각형 내부
        Point(0.25f, 0.25f),  // 삼각형 내부
        Point(0.5f, 0.5f),    // 변 위
        Point(-0.1f, -0.1f),  // 삼각형 외부, 근처
        Point(0.0f, 0.0f),    // 삼각형의 꼭지점
        Point(1.0f, 0.0f),    // 다른 꼭지점
        Point(0.5f, 0.0f),    // 변 위
        Point(0.0f, 0.5f),    // 또 다른 변 위
        Point(2.0f, 2.0f),    // 삼각형 외부, 멀리
        Point(0.1f, -0.1f),   // 삼각형 외부, 한 변 가까이
        Point(-0.1f, 0.1f),   // 삼각형 외부, 다른 변 가까이
        Point(1.0f, 1.0f)     // 삼각형 외부, 삼각형과 대각선 위치
    };

    for (int i = 0; i < 12; ++i)
    {
        std::cout << "Point " << i << " (" << points[i].GetX() << ", " << points[i].GetY() << "): ";
        std::cout << (bsp(a, b, c, points[i]) ? "Inside" : "Outside") << std::endl;
    }

    return (0);
}