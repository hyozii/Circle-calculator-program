#include <iostream>
#include <cmath>

using namespace std;

constexpr double PI = 3.14;

// 원 계산기를 위한 클래스
class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {
        cout << "***평면 원 계산기 접속***\n" << endl;
    }

    ~Circle() {
        cout << "***평면 원 계산기 종료***\n" << endl;
    }

    double getArea() {
        return PI * radius * radius;
    }

    double getCircumference() {
        return 2 * PI * radius;
    }
};

// 원기둥 계산기를 위한 클래스
class Cylinder {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h) : radius(r), height(h) {
        cout << "***원기둥 계산기 접속***\n" << endl;
    }

    ~Cylinder() {
        cout << "***원기둥 계산기 종료***\n" << endl;
    }

    double getVolume() {
        return PI * radius * radius * height;
    }

    double getSurfaceArea() {
        return 2 * PI * radius * (radius + height);
    }
};

// 원뿔 계산기를 위한 클래스
class Cone {
private:
    double radius;
    double height;

public:
    Cone(double r, double h) : radius(r), height(h) {
        cout << "***원뿔 계산기 접속***\n" << endl;
    }

    ~Cone() {
        cout << "***원뿔 계산기 종료***\n" << endl;
    }

    double getVolume() {
        return (1.0 / 3) * PI * radius * radius * height;
    }
};

// 구 계산기를 위한 클래스
class Sphere {
private:
    double radius;

public:
    Sphere(double r) : radius(r) {
        cout << "***구 계산기 접속***\n" << endl;
    }

    ~Sphere() {
        cout << "***구 계산기 종료***\n" << endl;
    }

    double getVolume() {
        return (4.0 / 3) * PI * pow(radius, 3);
    }

    double getSurfaceArea() {
        return 4 * PI * radius * radius;
    }
};

int main() {
    int choice;

    while (true) {
        cout << "원하는 계산을 선택하세요" << endl;
        cout << "1. 원의 넓이 계산" << endl;
        cout << "2. 원의 둘레 계산" << endl;
        cout << "3. 원기둥의 부피 계산" << endl;
        cout << "4. 원기둥의 겉넓이 계산" << endl;
        cout << "5. 원뿔의 부피 계산" << endl;
        cout << "6. 구의 부피 계산" << endl;
        cout << "7. 구의 겉넓이 계산" << endl;
        cout << "8. 종료" << endl;
        cout << "선택: ";

        cin >> choice;

        if (choice == 8) {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }

        double radius, height;
        switch (choice) {
        case 1:
            cout << "반지름 입력: ";
            cin >> radius;
            {
                Circle circle(radius);
                cout << "원의 넓이: \n" << circle.getArea() << endl;
            }
            break;
        case 2:
            cout << "반지름 입력: ";
            cin >> radius;
            {
                Circle circle(radius);
                cout << "원의 둘레: " << circle.getCircumference() << endl;
            }
            break;
        case 3:
            cout << "반지름 입력: ";
            cin >> radius;
            cout << "높이 입력: ";
            cin >> height;
            {
                Cylinder cylinder(radius, height);
                cout << "원기둥의 부피: " << cylinder.getVolume() << endl;
            }
            break;
        case 4:
            cout << "반지름 입력: ";
            cin >> radius;
            cout << "높이 입력: ";
            cin >> height;
            {
                Cylinder cylinder(radius, height);
                cout << "원기둥의 겉넓이: " << cylinder.getSurfaceArea() << endl;
            }
            break;
        case 5:
            cout << "반지름 입력: ";
            cin >> radius;
            cout << "높이 입력: ";
            cin >> height;
            {
                Cone cone(radius, height);
                cout << "원뿔의 부피: " << cone.getVolume() << endl;
            }
            break;
        case 6:
            cout << "반지름 입력: ";
            cin >> radius;
            {
                Sphere sphere(radius);
                cout << "구의 부피: " << sphere.getVolume() << endl;
            }
            break;
        case 7:
            cout << "반지름 입력: ";
            cin >> radius;
            {
                Sphere sphere(radius);
                cout << "구의 겉넓이: " << sphere.getSurfaceArea() << endl;
            }
            break;
        default:
            cout << "잘못된 숫자입니다." << endl;
            break;
        }
        cout << endl;
    }

    return 0;
}